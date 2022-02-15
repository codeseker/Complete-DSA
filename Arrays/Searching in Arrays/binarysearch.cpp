#include <iostream>
using namespace std;


// for ascending array
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
    return -1;
}

// for descending array
int binaryDescendin(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            // search in right
            s = mid + 1;
        }
        else
        {
            // serach in left
            e = mid - 1;
        }
    }
    return -1;
}
void arranging(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    if (arr[s] > arr[e])
    {
        cout << "Decreasing sorted" << endl;
    }
    else
    {
        cout << "Increasing sorted" << endl;
    }
}

int orderAgnosticsearch(int arr[], int n, int key)
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
        
        // if array is ascending
        if (arr[s] < arr[e])
        {
            if (arr[mid] > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        // if array is descending
        else
        {
            if (arr[mid] > key)
            {
                // search in right
                s = mid + 1;
            }
            else
            {
                // serach in left
                e = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{

    int arr[] = {-12,-2,0,1,3,4,6,89};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<orderAgnosticsearch(arr,n,3);
    return 0;
}