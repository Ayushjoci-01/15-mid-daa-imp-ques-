#include<iostream>
using namespace std;
void selection(int arr[90],int n)
{
   
    for(int i=0;i<n-1;i++)
    {
         int min=i;
         for(int j=i+1;j<n;j++)
         {
            if(arr[min]>arr[j])
            {
                min=j;
            }
         }
         swap(arr[min],arr[i]);

    }

}
void print(int arr[90],int n)
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
    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    print(arr,n);
}