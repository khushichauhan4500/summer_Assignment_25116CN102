#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fibo(n-1)+ fibo (n-2);
    }
}
int main(){
    int n; 
    cout<<"enter the no till whcih fibo is to found"<<endl;
    cin>>n;
    cout<<"the fibonacci series till n is"<<endl;
    for ( int i=0;i<n;i++){
        int fib= fibo(i);
    
    cout<<fib<<" ";
    }
}