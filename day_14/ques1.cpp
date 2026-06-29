#include<iostream>
using namespace std;
int main(){
    int key,n=8;
    cout<<"enetr the key to be found"<<endl;
    cin>>key;
    int pos=-1;
    int arr[]={10,11,13,2,4,56,78,45};
    cout<<"searching"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            pos=i;
            break;
        }
    }
    if(pos!=-1){
        cout<<"element found at index -->"<<pos<<endl;
    }
    else{
        cout<<"element not found"<<endl;
        
    }
    return 0;
    
    
}