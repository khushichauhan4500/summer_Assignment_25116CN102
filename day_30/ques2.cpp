#include<iostream>
using namespace std;

struct Book{
    int id;
    char title[30];
    bool issued;
};

int main(){

    Book b[5]={
        {1,"C++",false},
        {2,"Java",false},
        {3,"Python",false},
        {4,"DSA",false},
        {5,"DBMS",false}
    };

    int id;

    cout<<"Enter book id to issue: ";
    cin>>id;

    if(id>=1 && id<=5 && !b[id-1].issued){
        b[id-1].issued=true;
        cout<<"Book Issued";
    }
    else{
        cout<<"Not Available";
    }

    return 0;
}