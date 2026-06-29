#include<iostream>
using namespace std;
int fibo(int a){
    if(a==1||a==0){
        return a;
    }
    else{
        return fibo(a-1)+fibo(a-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"the fibo series is "<<endl;
    for(int i=0;i<n;i++){
      int  fib=fibo(i);
      cout<<fib<<"  ";
    }
}