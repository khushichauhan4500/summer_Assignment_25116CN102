#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,3,4,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_freq=1;
    
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
 max_freq=max(max_freq,count);


        
    }
     cout<<max_freq<<endl;
}