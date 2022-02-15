#include <iostream>
using namespace std;

void reverse(int arr[], int n, int m)
{
    for(int i=n-1; i>=m+1; i--)
    {
        cout<<arr[i]<<" ";
    }
}
void reversem(int arr[], int n, int m)
{
    for(int i=0; i<=m; i++)
    {
        cout<<arr[i]<<" ";
    }
    reverse(arr,n,m);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reversem(arr, 7, 0);

    return 0;
}