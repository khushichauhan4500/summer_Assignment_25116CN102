#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<2) 
    return false;
    for (int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int start,end;
    cout<<"enter start"<<endl;
    cin>>start;
    cout<<"enter end"<<endl;
    cin>>end;
    cout<<"prime no btw "<<start<<" and "<<end<<" is:  ";
    for(int i=start;i<=end;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}