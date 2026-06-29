#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the no of row to be printed"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            cout<<" ";
        }
        for(char ch ='A';ch<'A'+i;ch++){
            cout<<ch;
        }
        for(char ch='A'+i-2;ch>='A';ch--){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}