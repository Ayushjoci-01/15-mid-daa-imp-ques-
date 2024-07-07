// marge sort//
#include <iostream>
using namespace std;

void marge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *first = new int[len1];
    int *secound = new int[len2];
    int k = start;
    // copy//
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    for (int i = 0; i < len2; i++)
    {
        secound[i] = arr[k++];
    }
    // merge two sorted array//
    int index1 = 0;
    int index2 = 0;
    k = start;                             // main array ka index//
    while (index1 < len1 && index2 < len2) // limit ke andar rahe//
    {
        if (first[index1] <= secound[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = secound[index2++];
        }
    }
    // if the length is diifernet//
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = secound[index2++];
    }
}

void margesort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // left wala part sort//
    margesort(arr, start, mid);
    // right
    margesort(arr, mid + 1, end);
    // marge//
    marge(arr, start, end);
}

int main()
{
    int n;
    cout << "enter the range";
    cin >> n;
    cout << "enter the element";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    margesort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}