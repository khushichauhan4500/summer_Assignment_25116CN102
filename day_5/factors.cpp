#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enetr the no"<<endl;
    cin>>num;
    cout<<"printng the factors of the given no "<<endl;
    for(int i=1;i<=num;i++){
    if(num%i==0){
        cout<<i<<"  ";
    }
    }
    return 0;
}