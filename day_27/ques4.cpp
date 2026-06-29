#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float m1,m2,m3,m4,m5,total,per;

    cout << "Enter Name: ";
    getline(cin,name);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks of 5 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1+m2+m3+m4+m5;
    per = total/5;

    cout << "\n----- Marksheet -----";
    cout << "\nName: " << name;
    cout << "\nRoll No: " << roll;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << per << "%";

    if(per>=90)
        cout << "\nGrade: A+";
    else if(per>=75)
        cout << "\nGrade: A";
    else if(per>=60)
        cout << "\nGrade: B";
    else if(per>=40)
        cout << "\nGrade: C";
    else
        cout << "\nGrade: Fail";

    return 0;
}