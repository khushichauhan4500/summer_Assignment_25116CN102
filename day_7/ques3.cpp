#include<iostream>
using namespace std;
int sum(int a){
    if(a==0){
        return 0;
    }
    else{
        return a+ sum(a-1);
    }
}
int main(){
    int n;
    cin>>n;
   int res=sum(n);
   cout<<"fctorial of the given no n is  "<<res;
}