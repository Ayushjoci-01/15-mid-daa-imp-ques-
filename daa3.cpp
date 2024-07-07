#include<iostream>
#include<math.h>
using namespace std;
int jump(int arr[90],int n,int key,int &comp)
{
    int start=0;
    int end=n-1;
    while(arr[end]<key)
    {
        comp++;
        start=end;
        end=end+sqrt(n);
        if(end>n-1)
        {
            end=n;
        }
        for(int i=start;i<end;i++)
        {
            if(arr[i]==key)
            {
                return i;
            }
            return -1;
        }
    }
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
    int ju=jump(arr,n,key,comp);
    if(ju!=-1)
    {
        cout<<"elements found ";
    }
    else{
        cout<<"elements not found";
    }
    cout<<"total no of comp is "<<comp;
}