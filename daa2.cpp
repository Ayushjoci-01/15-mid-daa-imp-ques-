#include<iostream>
using namespace std;
int binary(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)

        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[90],n,key;
    cout<<"enter the no range";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
    int li=binary(arr,n,key);
    if(li!=-1)
    {
        cout<<"elements found";
    }
    else{
        cout<<"elements not found";
    }
}