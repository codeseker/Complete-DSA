#include <iostream>
using namespace std;

void twosum(int arr[], int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << i << " " << j;
            }
        }
    }
}

int main()
{

    int arr[] = {3, 3};
     twosum(arr, 2, 6);

    return 0;
}