#include<iostream>
using namespace std;
int main(){
    int n,r,rev=0,temp;
    cout<<"enetr the no to be checked"<<endl;
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==temp){
        cout<<"palindrome no"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
}