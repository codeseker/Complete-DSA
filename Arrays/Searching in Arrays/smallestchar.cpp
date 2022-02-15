#include <iostream>
using namespace std;

char smallest(char arr[], int n, char target)
{

    int s = 0;
    int e = n - 1;
    
    if(target == arr[n-1])
    {
        return arr[s];
    }
    if(target > arr[n-1])
    {
        return arr[n-1];
    }
    while (s <= e)
    {

        int mid = s + (e - s) / 2;

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

int main()
{

    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    char target;
    cin >> target;


    cout<<smallest(arr,n,target)<<endl;

    return 0;
}