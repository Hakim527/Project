#include<stdio.h>
#include<string.h>

struct customers{
    char name[100];
    int account_no;
    char address[500];
    char mobile_no[20];
    float balance;
    char password[100];
};

int main(){
    struct customers customer_file[50];

    //First I will store in the information structure of 5 customers

            //for customer ---- 1
            
            strcpy(customer_file[0].name, "Hakim");
            customer_file[0].account_no = 500001;
            strcpy(customer_file[0].address, "kamaru, Taluch, Dupchanchia, Bogura");
            strcpy(customer_file[0].mobile_no, "+880 1755-724064");
            customer_file[0].balance = 46732.321;
            strcpy(customer_file[0].password, "hakim123*");


              //for customer ---- 2
            strcpy(customer_file[1].name, "Rakib");
            customer_file[1].account_no = 500002;
            strcpy(customer_file[1].address, "kamaru, Taluch, Dupchanchia, Bogura");
            strcpy(customer_file[1].mobile_no, "+880 1755-654896");
            customer_file[1].balance = 1937.536;
            strcpy(customer_file[1].password, "rakib123*");

            //for customer ---- 3
            strcpy(customer_file[2].name, "Shompa");
            customer_file[2].account_no = 500003;
            strcpy(customer_file[2].address, "Boiahat, Boriahat, Shipgonge, Bogura");
            strcpy(customer_file[2].mobile_no, "+880 1755-994422");
            customer_file[2].balance = 16302.536;
            strcpy(customer_file[2].password, "shompa123*");

            //for customer ---- 4
            strcpy(customer_file[3].name, "Rifat");
            customer_file[3].account_no = 500004;
            strcpy(customer_file[3].address, "Dhaka,Dhaka");
            strcpy(customer_file[3].mobile_no, "+880 1755-650000");
            customer_file[3].balance = 73624.036;
            strcpy(customer_file[3].password, "rifat123*");

            //for customer ---- 5
            strcpy(customer_file[4].name, "Muhib");
            customer_file[4].account_no = 500005;
            strcpy(customer_file[4].address, "Dupchachia Bogura");
            strcpy(customer_file[4].mobile_no, "+880 1755-471253");
            customer_file[4].balance = 73624.036;
            strcpy(customer_file[4].password, "muhib123*");

 printf("Account Details For Press (1)\n");
 printf("Deposit Your Money For Press (2)\n");
 printf("To withdraw money Press (3)\n");
 printf("New Account For press (4)\n\n");

 int i,j, n ,x=0, account_no, customers = 5;
 int value;
 char password[100];
 printf("Enter A Number = ");
    scanf("%d",&n);

     if(n==1){
         printf("Enter Your Account Number: ");
            scanf("%d",&account_no);
        printf("Enter Your Password: ");
            scanf("%s",password);
            printf("\n\n");

            for(i=0; i<customers; i++){
            value = strcmp(password,customer_file[i].password);
                 if(account_no == customer_file[i].account_no && value == 0){
                printf("*************Account Ditails*************\n");
                printf("Name: %s\n",customer_file[i].name);
                printf("account Number: %d\n",customer_file[i].account_no);
                printf("Adress: %s\n",customer_file[i].address);
                printf("Mobile Number: %s\n",customer_file[i].mobile_no);
                printf("Your Balance: %.3lf TK\n",customer_file[i].balance);
                printf("*************************************\n\n");
                    x = 1;
                    break;
                } 
            }
        if(x==0){
            printf("************Sumthing is Wrong***************\n");
            printf("Account Number And Password Dosenot Mach\n");
            printf("*******************************************\n\n");
        }
            
    }else if(n==2){

          printf("Enter Your Account Number: ");
            scanf("%d",&account_no);
        printf("Enter Your Password: ");
            scanf("%s",password);
            printf("\n\n");
     float diposit;
        

         for(i=0; i<customers; i++){
            value = strcmp(password,customer_file[i].password);
                if(account_no == customer_file[i].account_no && value == 0){
                    printf("\nEnter Diposit Amound\t TK = ");
                        scanf("%f",&diposit);
                    customer_file[i].balance = customer_file[i].balance + diposit;
                    printf("********Diposit Saccessfully**********\n");
                    printf("Your Current Balance = %.3f TK\n%.2f + %.2f = %.3f TK\n",customer_file[i].balance - diposit,customer_file[i].balance - diposit,diposit,customer_file[i].balance);
                    printf("Your New Balence = %.3f TK\n",customer_file[i].balance);
                    printf("*************************************\n\n");
                     
                    x = 1;
                    break;
                } 
            }
        if(x==0){
                printf("*************Sumthing is Wrong***************\n");
                printf("Account Number And Password Dosenot Mach\n");
                printf("*******************************************\n\n");
            }    
        
        
    }else if(n==3){

          printf("Enter Your Account Number: ");
            scanf("%d",&account_no);
        printf("Enter Your Password: ");
            scanf("%s",password);
            printf("\n\n");
     float withdraw;

         for(i=0; i<customers; i++){
            value = strcmp(password,customer_file[i].password);
                if(account_no == customer_file[i].account_no && value == 0){
                    printf("\nEnter withdrawal Amound\t TK = ");
                    scanf("%f",&withdraw);
                    if(withdraw > customer_file[i].balance ){
                        printf("******************Sumthing is Wrong********************\n");
                        printf("Your Account Balance is = %f\n",customer_file[i].balance);
                        printf("Your withdrawal Amoud is Greterthen Your current Balance\n");
                        printf("**********************************************************\n\n");
                        x=1;
                        break;
                    }
                    printf("***********Withdraw Sucsessfylly************\n");
                    printf("%.2f - %.2f = %.3f TK\nYour Current Balance = %.2f\n",customer_file[i].balance,withdraw,customer_file[i].balance-withdraw,customer_file[i].balance-withdraw);
                    printf("********************************************\n\n");
                     
                    x = 1;
                    break;
                } 
            }
        if(x==0){
            printf("***************Sumthing is Wrong****************\n");
                printf("Account Number And Password Dosenot Mach\n");
            printf("**********************************************\n\n");
            }    
        
        
    }else if(n==4){
        customers++; //it's control account number alomatics 

        printf("Enter Your Name: ");
            scanf("%s",customer_file[customers].name);
        //Account Number ato genaret
        customer_file[customers].account_no = customer_file[customers-2].account_no + 1;
       
        
        printf("Enter Adress Withud Space use(,): ");
            scanf("%s",customer_file[customers].address);
        printf("Enter Mobile Number: ");
            scanf("%s",customer_file[customers].mobile_no);           
        printf("***Diposit Minimum 200 TK***\nEnter Diposit Amound = ");
            scanf("%f",&customer_file[customers].balance);
        printf("Enter Your Strong Password: ");
            scanf("%s",customer_file[customers].password);

            
    printf("\n\n***************************************************************\n");
    printf("\t\tYour Account Ditails\n");
    printf("***************************************************************\n\n");

        printf("Name: %s\n",customer_file[customers].name);
        printf("Account Number: %d\n",customer_file[customers].account_no);
        printf("Adress: %s\n",customer_file[customers].address);
        printf("Mobile Number: %s\n",customer_file[customers].mobile_no);
        printf("Balance: %.2f\n",customer_file[customers].balance);
        printf("Password: %s\n\n",customer_file[customers].password);

         
        
    }


    return 0;
}