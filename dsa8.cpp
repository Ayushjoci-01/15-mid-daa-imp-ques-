#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int min=arr[i];
        for(;j>=0;j--)
        {
            if(arr[j]>min)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=min;
    }

}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[90],n;
    cout<<"enter the no range";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion(arr,n);
    print(arr,n);
}