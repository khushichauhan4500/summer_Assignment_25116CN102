#include<iostream>
using namespace std;
int main(){
    
    int arr[]={0,3,5,0,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
         return 0;
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
    }
    return 0;
}
