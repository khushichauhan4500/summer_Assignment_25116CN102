#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{ return(b, a % b);
    }
}
int main(){
    int a,b;
    cout<<"enetr both the number"<<endl;
    cin>>a>>b;
    int gcdd =gcd(a,b);
    cout<<" the gcd is "<<gcdd<<endl;
}