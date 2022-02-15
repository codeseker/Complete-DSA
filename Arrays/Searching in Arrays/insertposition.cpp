#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
           return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
       
    }
    return s;
}

int main()
{

    int arr[] = {1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<binarySearch(arr, n, 0);
    return 0;
}