#include<iostream>
using namespace std;

struct Student{
    int roll;
    char name[30];
    float marks;
};

Student s[100];
int n=0;

void addStudent(){

    cout<<"Roll: ";
    cin>>s[n].roll;

    cout<<"Name: ";
    cin>>s[n].name;

    cout<<"Marks: ";
    cin>>s[n].marks;

    n++;
}

void display(){

    if(n==0){
        cout<<"No Records\n";
        return;
    }

    cout<<"\nRoll\tName\tMarks\n";

    for(int i=0;i<n;i++){
        cout<<s[i].roll<<"\t"
            <<s[i].name<<"\t"
            <<s[i].marks<<endl;
    }
}

void search(){

    int roll;
    cout<<"Enter Roll: ";
    cin>>roll;

    for(int i=0;i<n;i++){
        if(s[i].roll==roll){
            cout<<s[i].roll<<" "
                <<s[i].name<<" "
                <<s[i].marks<<endl;
            return;
        }
    }

    cout<<"Record Not Found";
}

int main(){

    int choice;

    do{

        cout<<"\n1.Add Student";
        cout<<"\n2.Display";
        cout<<"\n3.Search";
        cout<<"\n4.Exit";

        cout<<"\nChoice: ";
        cin>>choice;

        switch(choice){

            case 1:
                addStudent();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                cout<<"Exit";
                break;

            default:
                cout<<"Invalid";
        }

    }while(choice!=4);

    return 0;
}