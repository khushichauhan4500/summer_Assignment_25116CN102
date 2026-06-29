#include<iostream>
using namespace std;
int main(){
    int num;int temp=-1;
    cout<<"enetr the no"<<endl;
    cin>>num;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            bool prime = true;
        
    
    for(int j=2;j*j<=i;j++){
    if(i%j==0){
         prime=false;
         break;
    }
}
        
if(prime){
    temp=i;
}
        }
        }
    cout<<"largest prime factor is :"<<temp<<endl;

    return 0;
}