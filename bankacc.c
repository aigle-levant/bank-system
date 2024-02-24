
/*
program to simulate bank system and allow users to deposit, withdraw, check
their bank balance, and to produce simple interest amount for loan
*/

#include <stdio.h>

int main()
{
    int choice, time=2;
    float withdraw, deposit, principle=1000, rate_of_interest=4.5, account=1000.0;
    //account balance initialized to 1000

    printf("Welcome to Indian Bank!\n");
    printf("***********************\n");
    printf("1 - Check balance\n2 - Deposit\n3 - Withdraw\n4 - Simple interest\n");
    printf("***********************\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if (choice<=4&&choice>=1) //so that user won't enter incorrect number
    {
        switch(choice)
        {
        case 1:
        {
            printf("Your current balance is: %0.2f", account);
        }
        break;
        case 2:
        {
            printf("Please enter the amount to be deposited: ");
            scanf("%f",&deposit);
            printf("Your current balance is: %0.2f", account+deposit);
        }
        break;
        case 3:
        {
            printf("Please enter the amount to be withdrawn: ");
            scanf("%f", &withdraw);
            printf("Your current balance is %0.2f", account-withdraw);
        }
        break;
        case 4:
        {
            printf("Simple interest given is %0.2f", (principle*rate_of_interest*time)/100);
        }
        break;
        }
    }
    return 0;
}
