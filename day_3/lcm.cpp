#include<iostream>
using namespace std;
int lcm(int a, int b){
    int max;int lcm;
    if(a>b){
         max=a;
    }
    else{
         max =b;
    }
    while(true){
    if(max%a==0 && max%b==0){
        
        return max;
    }
    max++;
}
}

int main()
{
    int a,b;
    cin>>a>>b;
   int lcmm=lcm(a,b);
   cout<<"the lcm of the given two no is "<<lcmm<<endl;
   return 0;
}
    
    

    