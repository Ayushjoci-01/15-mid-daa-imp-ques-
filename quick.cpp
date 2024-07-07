#include<iostream>
using namespace std;
int partation(int arr[],int start,int end)
{
    int pivt=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivt)
        {
            count++;
        }
    }
    //right place//
    int pivtindex=start+count;
    swap(arr[pivt],arr[start]);
    //left and right part//
    int i=start;
    int j=end;
    while(i<pivtindex && j>pivtindex)
    {
        while(arr[i]<pivt)
        {
            i++;
        }
        while(arr[j]<pivt)
        {
            j--;
        }
        if(i<pivtindex && j>pivtindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivt;
}
void quicksort(int arr[90],int start,int end)
{
    //base case//
    if(start>=end)
    {
        return ;
    }
    //paration//
    int p=partation(arr,start,end);
    //left part//
    quicksort(arr,start,p-1);
    //right part//
    quicksort(arr,p+1,end);
}

int main()
{
    int arr[90],n;
    cout<<"enter the number range";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
   for(int i=0;i<n;i++)                         
   {
    cout<<arr[i]<<"";
   }
}