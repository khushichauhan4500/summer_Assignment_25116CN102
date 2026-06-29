#include<iostream>
using namespace std;
int main(){
int x,n;
cout<<"enter the base element"<<endl;
cin>>x;
cout<<"enetr the power of the base"<<endl;
cin>>n;
int res=1;
for(int i=0;i<n;i++){
    res=res*x;
}
cout<<"the value of x^n is  "<<res<<endl;
}