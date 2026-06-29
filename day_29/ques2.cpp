#include<iostream>
using namespace std;

int main(){
    int arr[100], n, choice;

    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    do{
        cout<<"\n1.Display";
        cout<<"\n2.Sum";
        cout<<"\n3.Maximum";
        cout<<"\n4.Minimum";
        cout<<"\n5.Search";
        cout<<"\n6.Exit";
        cout<<"\nChoice: ";
        cin>>choice;

        switch(choice){

            case 1:
                for(int i=0;i<n;i++)
                    cout<<arr[i]<<" ";
                break;

            case 2:{
                int sum=0;
                for(int i=0;i<n;i++)
                    sum+=arr[i];
                cout<<"Sum = "<<sum;
                break;
            }

            case 3:{
                int mx=arr[0];
                for(int i=1;i<n;i++)
                    if(arr[i]>mx) mx=arr[i];
                cout<<"Maximum = "<<mx;
                break;
            }

            case 4:{
                int mn=arr[0];
                for(int i=1;i<n;i++)
                    if(arr[i]<mn) mn=arr[i];
                cout<<"Minimum = "<<mn;
                break;
            }

            case 5:{
                int key,flag=0;
                cout<<"Enter element: ";
                cin>>key;

                for(int i=0;i<n;i++){
                    if(arr[i]==key){
                        cout<<"Found at index "<<i;
                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                    cout<<"Not Found";
                break;
            }

            case 6:
                cout<<"Exit";
                break;

            default:
                cout<<"Invalid";
        }

    }while(choice!=6);

    return 0;
}