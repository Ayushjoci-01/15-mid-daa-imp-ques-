#include<iostream>
using namespace std;
int main()
{
    int arr[90],n;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   for(int i=1;i<n;i++){
    int j=i-1;
        for(;j>=0;j--){
  
            if(arr[j]>arr[i]){
                arr[j+1]=arr[j];
            
            }else{
                break;
            }
        }
        arr[j+1]=arr[i];
    }
    cout<<"sorted elements are";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}