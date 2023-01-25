#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class bank
{
public:
    char name[100];
    char AcType[7];
    int Acno;
    float balance;

    // member functions of the class Bank
    //  initialize function to initialize data members
    void initialize()
    {
        cout << "\n_____________Enter Detail_____________";
        
        cout << "\nEnter Account Holders Name: ";
        gets(name); 
        cout << "\nAccount Type: ";
        gets(AcType); 
        cout << "\nEnter Account No: ";
        cin >> Acno;
        cout << "\nAccount Balance to deposit: ";
        cin >> balance;
    }
    // deposit() function to deposit amount in account
    void deposit()
    {
        int depositAmount;
        cout << "\nEnter the amount to diposit = ";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "\nAmount deposited successfuly\nYour New Balance:" << balance;
        cout << "\n-------------------------------------";
    }
    // withdraw() function to withdraw amount and check remaining balance

    void withdraw()
    {
        int withdraw;
        cout << "Your New Balance:" << balance;
        cout << "\nEnter amount to withdraw: ";
        cin >> withdraw;
        if (withdraw <= balance)
        {
            balance -= withdraw;
            cout << "\nRemaining Balance:" << balance;
        }
        else if (withdraw > balance)
        {
            cout << "Sorry you can not withdraw mony,you want withdraw mony please enter less amount than balance:" << balance;
        }
        else
        {
            exit(0);
        }
    }
    // display function to display user information
    void display()
    {
        cout << "\n-------------------------------------";
        cout << "\nName:" << name;
        cout << "\nAccount No.:" << Acno;
        cout << "\nAccount Type:" << AcType;
        cout << "\nAccount Balance:" << balance;
        cout << "\n-------------------------------------";
    }
};
int main()
{
    int i;
    char choice;
    bank bk;
    bk.initialize();
moreinfo:
    cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
    cin >> i;
    if (i == 1)
    {
        bk.display();
    }
    else if (i == 2)
    {
        bk.deposit();
    }
    else if (i == 3)
    {
        bk.withdraw();
    }
    cout << "\nDo you want to more operation ?\n press y for yes \n press n for no : \n";
    cin >> choice;
    if (choice == 'y')
    {
        goto moreinfo;
    }
    else if (choice == 'n')
        goto information;

information:
    cout << "\n-----------Thank for visit-----------";

    return 0;
}