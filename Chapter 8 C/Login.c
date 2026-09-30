// A system which asks user for his username and password to login to the dashboard.

#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("Please, login using your credentials.\n");
    char username[100];
    char password[100];
    char correct_username[] = "Vansh";
    char correct_password[] = "Vansh@3105";
    int correct=0, attempt=0;
    do
    {
        if(attempt==3)
        {
            printf("Sorry, your account's dashboard has been blocked for the next 24 hours.\n");
            break;
        }
        printf("Username:\n");
        fgets(username, 100, stdin);
        username[strcspn(username, "\n")] = '\0';
        printf("Password:\n");
        fgets(password, 100, stdin);
        password[strcspn(password, "\n")] = '\0';
        if(strcmp(username,correct_username)==0 && strcmp(password,correct_password)==0)
        {
            correct=1;
            attempt++;
        }  
        else
        {
            printf("Invalid username or password.\nTry Again.\n");
            attempt++;
            printf("You have only %d attempts left.\n",3-attempt);
        }
    }while(correct!=1);
    if(correct==1)
    {
        printf("==========Dashboard==========\n");
        printf("Name: Vansh\n");
        printf("Branch: CSE\n");
        printf("Semester: First\n");
        printf("Lab Group: A1\n");
    }
}