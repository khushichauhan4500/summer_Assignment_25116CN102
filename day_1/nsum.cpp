#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enetr the no of natural no whose sum is to be done"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        sum=sum+i;

    }
    cout<<"the sum of n natural no is"<<sum<<endl;
    return 0;
}
