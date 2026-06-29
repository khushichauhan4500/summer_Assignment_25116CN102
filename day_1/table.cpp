#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enetr the number :";
    cin>>n;
    cout<<"table of"<<n <<endl; 
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
