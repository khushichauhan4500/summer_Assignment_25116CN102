#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\n";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Roll: ";
            cin >> s[n].roll;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s[n].name);
            cout << "Enter Marks: ";
            cin >> s[n].marks;
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++) {
                cout << "\nRoll: " << s[i].roll;
                cout << "\nName: " << s[i].name;
                cout << "\nMarks: " << s[i].marks << endl;
            }
            break;

        case 3:
            int roll;
            cout << "Enter Roll Number: ";
            cin >> roll;
            for(int i=0;i<n;i++) {
                if(s[i].roll==roll) {
                    cout << "Name: " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
                }
            }
            break;
        }
    } while(choice!=4);

    return 0;
}