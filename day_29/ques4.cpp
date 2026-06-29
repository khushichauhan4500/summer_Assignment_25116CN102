#include<iostream>
using namespace std;

struct Item{
    int id;
    char name[30];
    int qty;
};

int main(){

    Item item[100];
    int n;

    cout<<"Number of items: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"\nItem "<<i+1<<"\n";
        cin>>item[i].id;
        cin>>item[i].name;
        cin>>item[i].qty;
    }

    cout<<"\nInventory\n";

    for(int i=0;i<n;i++){
        cout<<item[i].id<<" "
            <<item[i].name<<" "
            <<item[i].qty<<endl;
    }

    return 0;
}