#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    bool isActive;
    int accountNumber;
    int balance;

    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
        else
        {
            cout << "Insufficient funds!" << endl;
        }
    }

    void transfer(Customer &recipient, int amount)
    {
        if (amount <= balance)
        {
            this->withdraw(amount);
            recipient.deposit(amount);
            cout << "Transferred: " << amount << " to " << recipient.name << endl;
        }
    }

    void printDetails()
    {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Active Status: " << (isActive ? "Active" : "Inactive") << endl;
    }
};

int main()
{
    Customer customer1;
    customer1.name = "John Doe";
    customer1.isActive = true;
    customer1.accountNumber = 123456;
    customer1.balance = 1000;

    Customer customer2;
    customer2.name = "Jane Smith";
    customer2.isActive = true;
    customer2.accountNumber = 654321;
    customer2.balance = 500;

    customer1.deposit(200);
    customer1.printDetails();
    customer1.withdraw(150);
    customer1.printDetails();

    customer1.transfer(customer2, 300);
    customer1.printDetails();
    customer2.printDetails();

    return 0;
}