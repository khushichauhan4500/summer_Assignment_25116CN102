#include<iostream>
using namespace std;
int main(){


int n;
cout<<"enetr the no of elemnets in an array"<<endl;
cin>>n;
cout<<"enetr the elements"<<endl;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
cout<<"displaying the array"<<endl;
for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
}
}
