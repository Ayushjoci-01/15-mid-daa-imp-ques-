#include<iostream>
using namespace std;
int binary(int arr[90],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int firstocc(int arr[90],int n,int key)
{
    int start=0;
    int end=n-1;
   int mid=(start+end)/2;
   int count=-1;
   while(start<=end)
   {
    if(arr[mid]==key)
    {
        count=mid;
        end=mid-1;
        
    }
    else if(arr[mid]<key)
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
   }
   return count;
}
int lastocc(int arr[90],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int count=-1;
    while(start<=end){
        if(arr[mid]==key)
        {
            count=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return count;

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
    int bi=binary(arr,n,key);
    cout<<"enter the key";
    cin>>key;
    if(bi!=-1)
    {
        cout<<"elements found";
         int fi=firstocc(arr,n,key);
        int li=lastocc(arr,n,key);
        cout<<"total no of occ"<<li-fi+1;
    }
    else{
        cout<<"elements not found";
    }
    return 0;

}