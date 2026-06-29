#include<iostream>
using namespace std;
int main(){
int avg=0;
int sum=0;
int n;
cout<<"enetr the no of elemnets in an array"<<endl;
cin>>n;
cout<<"enetr the elements"<<endl;
int arr[n];
for(int i=0;i<n;i++){//enetering the array
    cin>>arr[i];
}
cout<<"displaying the sum and avg of the array"<<endl;//sum
for(int i=0;i<n;i++){
    sum+=arr[i];
}
avg=sum/n;
cout<<sum<<"and  "<<avg<<" "<<endl;

    
}
