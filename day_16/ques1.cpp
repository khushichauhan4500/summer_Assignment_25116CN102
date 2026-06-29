#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0])+1;
    int actualsum=n*(n+1)/2;
    int missing_number=0;
    int sumarr=0;
    for(int i=0;i<n;i++){
        sumarr+=arr[i];
    }
     missing_number=actualsum-sumarr;
    cout<<missing_number<<endl;
}