#include<iostream>
using namespace std;

struct Employee{
    int id;
    char name[30];
    float salary;
};

int main(){

    Employee emp[100];
    int n;

    cout<<"Number of Employees: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>emp[i].id;
        cin>>emp[i].name;
        cin>>emp[i].salary;
    }

    cout<<"\nEmployee Details\n";

    for(int i=0;i<n;i++){
        cout<<emp[i].id<<" "
            <<emp[i].name<<" "
            <<emp[i].salary<<endl;
    }

    return 0;
}