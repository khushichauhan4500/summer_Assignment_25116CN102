#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[]={12,13,56,78,90};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secmax= INT_MIN;
    for(int i=0;i<n;i++){
if(arr[i]>secmax&& arr[i]!=max){
    secmax=arr[i];
}

    }
    cout<<"the second largest no is the -->"<<secmax<<endl;
    return 0;

    
    
    
}