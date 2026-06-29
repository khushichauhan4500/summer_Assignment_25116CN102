#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of row which pyramid is to be built"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

