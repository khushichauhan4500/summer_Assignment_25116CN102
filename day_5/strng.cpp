#include<iostream>
using namespace std;
int main(){
    int num,temp,sum=0;
    cout<<"enetr the no"<<endl;
    cin>>num;
    temp=num;
    while(temp>0){
        int ld=temp%10;
        int fact=1;
        for(int i=1;i<=ld;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;

    }
    if(sum==num){
        cout<<"strong no"<<endl;
    }
    else{
        cout<<"not";
    }
    return 0;
}