#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int key=20;
    int low=0; int high= n-1; int mid;
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==key){
        printf("element to be found is %d",mid);
        return 0;
        }
        else if(arr[mid]<key){
            low=low+1;
        }
        else{
            high=high-1;
        }
    }
    printf("element is found ");
    return 0;
}