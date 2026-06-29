#include<iostream>
using namespace std;
int main (){
int arr1[100][100],r1,c1;int trans[100][100];
    cout<<"enetr the row n col of 1 matrix"<<endl;
    cin>>r1>>c1;
    
    cout<<"entering elemnts in array 1"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
          trans[i][j]=arr1[j][i];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
          cout<<trans[i][j]<<"\t";
        }
        cout<<endl;
    }

}