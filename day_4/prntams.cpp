#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int start,end;
    
    cin>>start>>end;
    for(int i=start;i<=end;i++){
      int  n=i;
      int count =0;
      int res=0;
    
    int temp =n;
    
    while(n>0){
        count++;
         n=n/10;
        
    }
    n=temp;
    while(n>0){
        int ld=n%10;
        res = res + (int)pow(ld,count);
        n =n/10;       
    }
    
    
    if(res==temp){
        cout<<temp <<" ";
    }
}
}

    
