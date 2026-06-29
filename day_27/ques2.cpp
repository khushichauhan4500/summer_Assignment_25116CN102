#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee e[100];
    int n=0, choice;

    do {
        cout << "\n1.Add Employee\n2.Display Employees\n3.Search Employee\n4.Exit\n";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter ID: ";
            cin >> e[n].id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin,e[n].name);
            cout << "Enter Salary: ";
            cin >> e[n].salary;
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++) {
                cout << "\nID: " << e[i].id;
                cout << "\nName: " << e[i].name;
                cout << "\nSalary: " << e[i].salary << endl;
            }
            break;

        case 3:
            int id;
            cout << "Enter ID: ";
            cin >> id;
            for(int i=0;i<n;i++) {
                if(e[i].id==id) {
                    cout << "Name: " << e[i].name << endl;
                    cout << "Salary: " << e[i].salary << endl;
                }
            }
            break;
        }
    } while(choice!=4);

    return 0;
