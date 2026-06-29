#include<iostream>
using namespace std;
int main (){
    int arr1[100][100],arr2[100][100],sum[100][100],r1,r2,c1,c2;
    cout<<"enetr the row n col of 1 matrix"<<endl;
    cin>>r1>>c1;
    cout<<"enter the row n col of 2 matrix"<<endl;
    cin>>r2>>c2;
    if(r1!=r2|| c1!=c2){
        cout<<"addition nt possible"<<endl;
        return 0;
    }
    cout<<"entering elemnts in array 1"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"entering elemnts in array 2"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
          sum[i][j]=arr1[i][j]+arr2[i][j];  
        }
    }
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;

    }
    return 0;
}