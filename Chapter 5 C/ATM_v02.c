#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a,pin,attempt,task,accessed,balance,deposit,withdraw,transaction,new_pin,shut_down,correct_pin; 
    attempt = 0; transaction = 0; shut_down = 1;
    accessed = 0; correct_pin = 3105;
    balance = 98000;

    do
    {
        do
        {
            // Take PIN and verify the pin entered by the user.
            printf("Please,Enter your card.\n");
            printf("Card Received.\n");
            printf("Enter PIN:\n"); 
            scanf("%d",&pin);
        
            if(pin == correct_pin)
            {
                accessed = 1;
                break;
            }
            else 
            {
                // Wrong pin case.
                printf("Wrong PIN.Try Again.\n");
                attempt ++;
                printf("You have only %d attempts left.\n", 3-attempt);     
            }
        }while(attempt < 3);
        
        if(!accessed)
        {
            printf("Sorry, your atm card has been blocked.\n");
            printf("Kindly, visit your nearest bank to unblock your card.\n");
            return 0;
        }

        
        do{
            // User can choose which task to perform.
            do
            {
                printf("====== Welcome to the ATM Menu ======\n");
                printf("Choose the task you want to perform:\n");
                printf("1) Check Balance,\n2) Deposit Cash.\n3) Withdraw Cash.\n4) Change PIN.\n5) Remove Card.\n");
                printf("=====================================\n");
                scanf("%d",&task);
                if(task>5 || task<1)
                {
                    printf("Kindly enter valid input.\n");
                }
            }while(task<1 || task > 5);

            switch(task)
            {
                case 1:
                printf("Your current account balance is %d.\n", balance);
                break;

                case 2:
                printf("How much cash do you want to deposit?\n");
                scanf("%d",&deposit);
                balance = balance + deposit;
                printf("Your updated account balance is %d\n",balance);
                transaction++;
                break;

                case 3:
                printf("How much cash do you want to withdraw?\n");
                scanf("%d",&withdraw);
                if(withdraw>balance)
                {
                    printf("Insufficient Balance!!\n");
                }
                else 
                {
                    balance = balance - withdraw;
                    printf("Your remaining accound balance is %d\n",balance);
                    transaction++;
                }
                break;

                case 4:
                do
                {
                    printf("Do you want to change pin?(1 for yes / 0 for no)\n");
                    scanf("%d",&a);
                    if(a>1 || a<0)
                    {
                        printf("Kindly enter only 0 or 1. No other input is accepted.\n");
                    }
                }while(a != 1 && a != 0);
                if(a==1)
                {
                    printf("Enter new PIN:\n");
                    scanf("%d",&new_pin);
                    correct_pin = new_pin;
                    printf("Your new PIN has been set.\n");
                    printf("For security reasons,kindly login again.\n");
                    task = 5;
                }
                else
                {
                    printf("PIN is not changed.\n");
                }
                break;
                
            }

        }while(task != 5);

        printf("Total balance left: %d\n",balance);
        printf("Total transactions made: %d\n",transaction);

    }while(shut_down == 1);
}
    
