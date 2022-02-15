#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = arr[i];
}

void wavesort(int arr[], int n)
{
   
    for (int i = 0; i < n; i += 2)
    {
        swap(arr, i, i + 1);
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    wavesort(arr,4);
    for(int i=0; i<4; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}