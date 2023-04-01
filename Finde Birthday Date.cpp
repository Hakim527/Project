#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

#define ll long long int
#define mod   10
#define pb    push_back
#define pf    push_front
#define All(x)   (x).begin(),(x).end();
#define strUnique(x)  (x).erase(unique((x).begin(),(x).end()),(x).end());
#define Faster  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int LeapYear_Test(int Year);
int main(){
    int Date,Month,Year;
    int MC,YC,DC,LPY,Result;

    cout<<"\n\nEnter Date: ";   cin>>Date;
    cout<<"Enter Month: ";   cin>>Month;
    cout<<"Enter Date: ";   cin>>Year;
    
    if(Month==1 || Month==10) MC = 1;
    else if(Month==2 || Month==3 || Month==11) MC = 4;
    else if(Month==4 || Month==7) MC = 0;
    else if(Month==5) MC = 2;
    else if(Month==6) MC = 5;
    else if(Month==8) MC = 3;
    else if(Month==9 || Month==12) MC = 6;
    else {
        printf("Month is Wrong\n");
        return 0;
    }

    int Y = Year / 100;

    if(Y==20 || Y==16) YC = 0;
    else if(Y==19) YC = 1;
    else if(Y==18) YC = 3;
    else if(Y==17) YC = 5;
    else{
        printf("The year is older than 1600\n");
        return 0;
    }
    int Temp = Year - (Y * 100);
    LPY = Temp / 4;
    //printf("MC = %d\n Date = %d\nYC = %d\nLPY = %d\n",MC,Date,YC,LPY);
    Result = MC + Date + YC + Temp + LPY;

    if((LeapYear_Test(Year) == 1) && (Month==1 || Month==2) )
        Result -=1;
    
    Result = Result % 7;

    switch (Result){
    case 0:
        printf("\n\nFri Day\n\n");
        break;
    case 1:
        printf("\n\nSatur Day\n\n");
        break;
    case 2:
        printf("\n\nSun Day\n\n");
        break;
    case 3:
        printf("\n\nMon Day\n\n");
        break;
    case 4:
        printf("\n\nTues Day\n\n");
        break;
    case 5:
        printf("\n\nWednes Day\n\n");
        break;
    case 6:
        printf("\n\nThurs Day\n\n");
        break;
    default:
        printf("Something is wrong\n");
        break;
    }

 return 0;
}

int LeapYear_Test(int Year){
    if(Year%400 == 0) return 1;
    else if(Year % 4 == 0 && Year % 100 !=0) return 1;
    else return 0;
}