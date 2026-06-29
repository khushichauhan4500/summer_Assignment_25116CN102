#include<iostream>
using namespace std;
int main(){
    int count=0,n;
    cout<<"enter the no whose digits are to be counted"<<endl;
    cin>>n;
    while(n>0){
        count++;
        n=n/10;
        
        
    }
    cout<<count;
}
    