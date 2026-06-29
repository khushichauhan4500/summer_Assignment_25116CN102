#include<iostream>
using namespace std;
int main (){
int arr1[100][100],n;int dgnlsum=0;
    cout<<"enetr the row n col of 1 matrix"<<endl;
    cin>>n;
    
    cout<<"entering elemnts in array 1"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n+1){
          dgnlsum+=arr1[i][j];
            }
        }
    }
    
          cout<<dgnlsum;
       return 0;

}