#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enetr the number whose fatorial is to be done"<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        fact=fact*i;

    }
    cout<<"the factorial of n natural no is  "<<fact<<endl;
    return 0;
}
