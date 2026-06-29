#include<iostream>
using namespace std;
int fact(int n){
    int res=1;
    for(int i=1;i<=n;i++){
         res=res*i;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int facto=fact(n);
    cout<<"the factorial of the given no is-> "<<facto<<endl;
}