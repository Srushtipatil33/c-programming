#include <iostream>
using namespace std;

// Class for Account Holder
class AccountHolder
{
protected:
    string accHolder;
    int accNo;
    double balance;

public:
    // Constructor
    AccountHolder(string name, int number, double bal)
    {
        accHolder = name;
        accNo = number;
        balance = bal;
    }

    // Display account details
    void displayAccount()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Holder : " << accHolder << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Balance        : " << balance << endl;
    }

    // Destructor
    ~AccountHolder()
    {
        cout << "AccountHolder destructor called." << endl;
    }
};


// Class for Transaction and Interest
class Transaction : public AccountHolder
{
private:
    double transaction;
    double interest;
    double interestRate;

public:
    // Constructor
    Transaction(string name, int number, double bal)
        : AccountHolder(name, number, bal)
    {
        transaction = 0;
        interest = 0;
        interestRate = 0;
    }

    // Withdrawal
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            transaction = amount;
            balance = balance - amount;

            cout << "\nWithdrawal Amount : " << transaction << endl;
            cout << "Remaining Balance : " << balance << endl;
        }
        else
        {
            cout << "\nInsufficient Balance!" << endl;
        }
    }

    // Add Interest
    void addInterest(double rate)
    {
        interestRate = rate;
        interest = balance * interestRate / 100;
        balance = balance + interest;

        cout << "\nInterest Rate : " << interestRate << "%" << endl;
        cout << "Interest      : " << interest << endl;
        cout << "New Balance   : " << balance << endl;
    }

    // Display all details
    void display()
    {
        displayAccount();

        cout << "Transaction    : " << transaction << endl;
        cout << "Interest Rate  : " << interestRate << "%" << endl;
        cout << "Interest       : " << interest << endl;
    }

    // Destructor
    ~Transaction()
    {
        cout << "Transaction destructor called." << endl;
    }
};


int main()
{
    string name;
    int number;
    double bal, rate, amount;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> number;

    cout << "Enter Balance: ";
    cin >> bal;

    Transaction acc(name, number, bal);

    cout << "\nEnter Interest Rate: ";
    cin >> rate;
    acc.addInterest(rate);

    cout << "\nEnter Withdrawal Amount: ";
    cin >> amount;
    acc.withdraw(amount);

    acc.display();

    return 0;
}
