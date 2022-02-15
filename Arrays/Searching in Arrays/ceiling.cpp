#include <iostream>
using namespace std;

int ceiling(int arr[], int n, int target)
{
    if(target> arr[n-1])
    {
        return -1;
    }
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return arr[mid];
        }
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    // s = e + 1;
    return arr[s];
}

int floor(int arr[], int n, int target)
{
    if(target < arr[0])
    {
        return -1;
    }
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] == target)
        {
            return arr[mid];
        }
        else if(arr[mid]>target)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }

    return arr[e];
}

int main()
{

    int arr[] = {2, 3, 5, 9, 14, 16, 18,20,24,45,64};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << ceiling(arr, n, 63) << endl;
    cout << floor(arr, n, 63) << endl;

    return 0;
}