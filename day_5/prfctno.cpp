#include<iostream>
using namespace std;
int main(){
    int sum=0,num,div;
    cout<<"enter the no"<<endl;
    cin>>num;
   int temp=num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==temp){
        cout<<"perfect no"<<endl;
    }
    else{
        cout<<"not perfect"<<endl;
    }
    return 0;
}
    
        

    

