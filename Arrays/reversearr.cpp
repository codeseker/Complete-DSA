#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){


    int arr[] = {1,3,5,6,7,8,9};
    reverse(arr,7);
    printArray(arr,7);

    return 0;
}