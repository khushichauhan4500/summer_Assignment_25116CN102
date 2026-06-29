#include <iostream>
using namespace std;

int main() {
    int seats = 10;
    int choice;

    do {
        cout << "\n1.Book Ticket\n2.Cancel Ticket\n3.Available Seats\n4.Exit\n";
        cin >> choice;

        if (choice == 1) {
            if (seats > 0) {
                seats--;
                cout << "Ticket Booked\n";
            } else {
                cout << "No Seats Available\n";
            }
        }
        else if (choice == 2) {
            if (seats < 10) {
                seats++;
                cout << "Ticket Cancelled\n";
            } else {
                cout << "No Bookings Found\n";
            }
        }
        else if (choice == 3) {
            cout << "Available Seats: " << seats << endl;
        }

    } while (choice != 4);

    return 0;
}