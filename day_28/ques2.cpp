#include <iostream>
using namespace std;

class Bank {
    string name;
    int accNo;
    double balance;

public:
    void create() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amt;
        cout << "Enter Amount: ";
        cin >> amt;
        balance += amt;
    }

    void withdraw() {
        double amt;
        cout << "Enter Amount: ";
        cin >> amt;
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAccount No: " << accNo;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    do {
        cout << "\n1.Create\n2.Deposit\n3.Withdraw\n4.Display\n5.Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            b.create();
            break;
        case 2:
            b.deposit();
            break;
        case 3:
            b.withdraw();
            break;
        case 4:
            b.display();
            break;
        }
    } while (choice != 5);

    return 0;
}