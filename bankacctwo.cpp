/*
program to simulate bank system, but in C++*/

#include <iostream>
using namespace std;

int main()
{
    int choice{};
    float account{1000};
    char a[100]{"*******************"};

    cout<<"Welcome to Indian bank"<<'\n'<<a<<'\n';
    cout<<"1-Check balance"<<'\n'<<"2-Deposit"<<'\n'<<"3-Withdraw"<<'\n'<<"4-Simple interest"<<'\n'<<a<<'\n';
    cout<<"Enter your choice: ";
    cin>>choice;

    if (choice<=4&&choice>=1)
    {
        int time{2};
        float withdraw{}, deposit{}, principle{1000}, rate_of_interest{4.5};
        switch(choice)
        {
            case 1:
            {
                cout<<"Your current balance is: "<<account;
            }
            break;
            case 2:
            {
                cout<<"Enter the amount to be deposited: ";
                cin>>deposit;
                cout<<"Your current balance is: "<<account+deposit;
            }
            break;
            case 3:
            {
                cout<<"Enter the amount to be withdrawn: ";
                cin>>withdraw;
                cout<<"Your current balance is: "<<account-withdraw;
            }
            break;
            case 4:
            {
                cout<<"Simple interest given is: "<<(principle*rate_of_interest*time)/100;
            }
            break;
        }
    }
    return 0;
}
