#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;int count=0;int res=0;
    cin>>n;
    int temp =n;
    
    while(n>0){
        count++;
         n=n/10;
        
    }
    n=temp;
    while(n>0){
        int ld=n%10;
        res = res + (int)pow(ld,count);
        n =n/10;       
    }
    
    
    if(res==temp){
        cout<<"amstrong";
    } 
    else{
        cout<<"not";
    }
}