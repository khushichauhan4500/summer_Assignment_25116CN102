#include<iostream>
using namespace std;
int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a* fact(a-1);
    }
}
int main(){
    int n;
    cin>>n;
   int  fct=fact(n);
   cout<<"fctorial of the given no n is  "<<fct;
}