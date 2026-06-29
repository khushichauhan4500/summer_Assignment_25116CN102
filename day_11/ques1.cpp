#include<iostream>
using namespace std;
int sum(int a, int b){
    int sum=0;
    sum=a+b;
    return sum;

}
int main(){
    int a,b;
    cout<<"enter the elements whoe sum is to be taken "<<endl;
    cin>>a>>b;
    int res=sum(a,b);
    cout<<"the sum of the two is -> "<<res<<endl; 
}