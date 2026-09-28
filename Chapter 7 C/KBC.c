#include <stdio.h>
void askquestion(char ques[], char o1[], char o2[], char o3[], char o4[]); // Function prototype

int main(void)
{
    int correctans[5] = {2,1,4,3,1};
    int j = 0, score = 0;
    int ans[5];
    int i = 0;
    askquestion("How many international centuries does Virat Kohli scored?", "85", "86", "87", "84");
    scanf(" %d", &ans[i]);
    askquestion("How many ODI centuries does Virat Kohli scored?", "55", "54", "56", "53");
    scanf(" %d", &ans[i+1]);
    askquestion("How many test centuries does Virat Kohli scored?", "31", "32", "33", "30");
    scanf(" %d", &ans[i+2]);
    askquestion("How many IPL centuries does Virat Kohli scored?", "10", "11", "9", "12");
    scanf(" %d", &ans[i+3]);
    askquestion("How many international centuries does Rohit Sharma scored?", "51", "53", "52", "54");
    scanf(" %d", &ans[i+4]);

    for(j = 0; j<5; j++)
    {
        if(correctans[j] == ans[j])
        {
            score++;
        }
    }
    printf("Your final score is %d\n", score);
}


// Function definition
void askquestion(char ques[], char o1[], char o2[], char o3[], char o4[])
{
    printf("%s\n", ques);
    printf("1) %s\n", o1);
    printf("2) %s\n", o2);
    printf("3) %s\n", o3);
    printf("4) %s\n", o4);
}