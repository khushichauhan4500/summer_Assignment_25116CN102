#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int id;
    string title;
    bool issued;
};

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << "\n1.Add Book\n2.Display Books\n3.Issue Book\n4.Return Book\n5.Exit\n";
        cin >> choice;

        if (choice == 1) {
            Book b;
            cout << "Enter Book ID: ";
            cin >> b.id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, b.title);
            b.issued = false;
            books.push_back(b);
        }
        else if (choice == 2) {
            for (auto b : books) {
                cout << b.id << " " << b.title << " ";
                if (b.issued)
                    cout << "Issued";
                else
                    cout << "Available";
                cout << endl;
            }
        }
        else if (choice == 3) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;
            for (auto &b : books) {
                if (b.id == id && !b.issued) {
                    b.issued = true;
                    cout << "Book Issued\n";
                }
            }
        }
        else if (choice == 4) {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;
            for (auto &b : books) {
                if (b.id == id && b.issued) {
                    b.issued = false;
                    cout << "Book Returned\n";
                }
            }
        }
    } while (choice != 5);

    return 0;
}