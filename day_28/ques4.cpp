#include <iostream>
#include <vector>
using namespace std;

class Contact {
public:
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    int choice;

    do {
        cout << "\n1.Add Contact\n2.Display Contacts\n3.Search Contact\n4.Exit\n";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Contact c;
            cout << "Enter Name: ";
            getline(cin, c.name);
            cout << "Enter Phone: ";
            getline(cin, c.phone);
            contacts.push_back(c);
        }
        else if (choice == 2) {
            for (auto c : contacts)
                cout << c.name << " - " << c.phone << endl;
        }
        else if (choice == 3) {
            string n;
            cout << "Enter Name: ";
            getline(cin, n);
            bool found = false;
            for (auto c : contacts) {
                if (c.name == n) {
                    cout << c.name << " - " << c.phone << endl;
                    found = true;
                }
            }
            if (!found)
                cout << "Contact Not Found\n";
        }

    } while (choice != 4);

    return 0;
}