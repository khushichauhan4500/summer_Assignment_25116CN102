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
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}