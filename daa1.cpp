//linear search//
#include<iostream>
using namespace std;
int linear(int arr[],int n,int key,int &comp)
{
    for(int i=0;i<n;i++)
    {
        comp++;
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()

{
    int arr[90],n,key,comp=0;
    cout<<"enter the no range";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
    int li=linear(arr,n,key,comp);
    if(li!=-1)
    {
        cout<<"element at index"<<li<<endl;
        cout<<"elements found";
    }
    else{
        cout<<"elements not found";
    }
    cout<<"total no of comp"<<comp;

}