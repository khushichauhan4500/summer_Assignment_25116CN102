#include<iostream>
using namespace std;
int main (){
    int n;
    char ch='a';
    cout<<"enetr the no rows to be printed"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        
        for(int j=1;j<=i;j++){
            
            
            cout<<ch;
            
        }
        cout<<endl;
        ch++;
    }
    return 0;
}