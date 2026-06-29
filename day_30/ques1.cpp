#include<iostream>
using namespace std;

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){

    Student s[100];
    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s[i].roll;
        cin>>s[i].name;
        cin>>s[i].marks;
    }

    cout<<"\nStudent Records\n";

    for(int i=0;i<n;i++){
        cout<<s[i].roll<<" "
            <<s[i].name<<" "
            <<s[i].marks<<endl;
    }

    return 0;
}