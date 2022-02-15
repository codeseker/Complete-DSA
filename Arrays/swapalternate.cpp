#include <iostream>
using namespace std;

void swapalternate(int arr[], int n)
{
    for(int i=0; i<n-1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    cout<<endl;
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    
    int arr[] = {1,2,3,4,5,7,8,9,6,5,4,3};
    swapalternate(arr,12);
    printArray(arr,12);


    return 0;
}