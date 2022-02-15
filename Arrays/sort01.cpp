#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void sort01(int arr[], int n)
{
    int i=0;
    int j=n-1;

    while(i <= j)
    {
        if(arr[i] == 0)
        {
            i++;

        }
        else if(arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            j--;
        }
    }
}

int main(){

    int arr[] = {0,1,0,1,1,1,0,0,0};
    sort01(arr,9);
    printArray(arr,9);


    return 0;
}