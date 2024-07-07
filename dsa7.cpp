#include<iostream>
using namespace std;
void sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            swap(arr[i],arr[min]);

        }
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
    sorted(arr,n);
    cout<<"sorted element are";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}