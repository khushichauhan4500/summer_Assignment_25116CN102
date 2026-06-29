#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the no of row to be printed"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-1;sp++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}