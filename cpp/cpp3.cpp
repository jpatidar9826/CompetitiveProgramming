#include<iostream>
using namespace std;
class Bank
{
private:
    char nameofdepositor[50];
    int accno, balance, depositamount, withdrawamount;
    char acctype;

public:
    void initialise()
    {
        cout << "Enter account no." << endl;
        cin >> accno;
        cout << "Enter name of depositor" << endl;
        cin.ignore();
        cin.getline(nameofdepositor, 50);
        cout << "Enter the account type (S/C)" << endl;
        cin >> acctype;
        cout << "Enter initial deposit balance " << endl;
        cin >> balance;
    }
    void deposit()
    {
        cout << "Enter the amount to be deposited " << endl;
        cin >> depositamount;
        if (depositamount >= 0)
        {
            balance = balance + depositamount;
            cout << "Deposit of " << depositamount << " is successfully made" << endl;
            cout << "Your current account balance is " << balance << endl;
        }
        else
        {
            cout << "Negative amount cannot be deposited." << endl;
        }
    }
    void withdraw()
    {
        cout << "Enter the amount to be withdrawn " << endl;
        cin >> withdrawamount;
        if (withdrawamount >= 0 && withdrawamount < balance)
        {
            balance = balance - withdrawamount;
            cout << withdrawamount << " has been successfully withdrawn." << endl;
            cout << "Your current account balance is " << balance << endl;
        }
        else if (withdrawamount > balance)
        {
            cout <<"Your account does not have suffcient amount to be withdrawed"<<endl; 
        }
        else if (withdrawamount < 0)
        {
            cout << "Negative amount cannot be withdrawn" << endl;
        }
    }
    void display()
    {
        cout << "Name of depositor - " << nameofdepositor << endl
             << "Account no. - " << accno << endl
             << "Account Type - " << acctype << endl
             << "Balance - " << balance << endl;
    }
};
int main()
{
    Bank b1;
    b1.initialise();
    b1.display();
    b1.deposit();
    b1.withdraw();
}