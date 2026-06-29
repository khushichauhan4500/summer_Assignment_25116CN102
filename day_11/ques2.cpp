#include<iostream>
using namespace std;
int maxi(int a, int b){
    
    if(a>b){
        return a;
    }
    else return b;

}
int main(){
    int a,b;
    cout<<"enter the elements to be taken "<<endl;
    cin>>a>>b;
    int res=maxi(a,b);
    cout<<"the max of the two number is -> "<<res<<endl; 
}