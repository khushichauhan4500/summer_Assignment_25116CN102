#include<iostream>
using namespace std;
int main(){
    int ld,num,sum=0;
    cout<<"enetr the no"<<endl;
    cin>>num;
    while(num>0){
        ld=num%10;
        sum=sum+ld;
        num=num/10;
    }
    cout<<"the sum of digits if given no is :"<<sum<<endl;
    return 0;
}