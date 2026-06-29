#include<iostream>
using namespace std;
int main(){
    int ld,num,pro=1;
    cout<<"enetr the no"<<endl;
    cin>>num;
    while(num>0){
        ld=num%10;
        pro=pro*ld;
        num=num/10;
    }
    cout<<"the product of digits if given no is :"<<pro<<endl;
    return 0;
}