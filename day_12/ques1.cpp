#include<iostream>
using namespace std;
bool isPalin(int n){
    int rev=0,ld,temp;
    temp=n;
    while(n>0){

     ld=n%10;
     rev=rev*10+ld;
    n=n/10;
    }
    if(rev==temp){
        return true;
    }
 return false;
}

int main(){
    int n;
    cout<<"enetr the no to be checked"<<endl;
    cin>>n;
    if(isPalin(n)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not";
    }
    return 0;

}