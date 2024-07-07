#include<iostream>
using namespace std;
void marge(int *arr,int start,int end)
{
    int mid=(start+end)/2;
    int len1=mid-start+1;
    int  len2=end-mid;
    int *first=new int (len1);
    int *secound=new int (len2);
    int k=start;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    int k=mid+1;
    for(int i=0;i<len2;i++)
    {
        secound[i]=arr[k++];
    }
    //marge//
    int index1=0;
    int index2=0;
    int k=start;//main array index//
    while (index1<len1 && index2<len2)
    {
        if(first[index1]<secound[index2])
        {
            arr[k++]=arr[index1++];
        }
        else{
            arr[k++]=arr[index2++];
        }
    }while (index1<len1)
    {
        arr[k++]=first[index1++];
    }
    while (index2<len2)
    {
        arr[k++]=secound[index2++];
    }
}
void margesort(int arr,int n,int start,int end)
{
    //base case
    if(start<=end)
    {
        return;
    }
    int mid=(start+end)/2;
    //left part sort//
    margesort(arr,start,mid);
    //right part sort//
    margesort(arr,mid+1,end);
    //marge//
    marge(arr,start,end);

}
int main()
{
    int arr[5]={2,5,1,6,9};
    int n=5;
    margesort(arr,n,0,n-1);// start=0,end=n-1;//

}