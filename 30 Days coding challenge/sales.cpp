#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; )
    {
        
        if (arr[i] == arr[i + 1])
        {
            count++;
            i = i + 2;
        }
        else{
            i++;
        }
    }
     cout << count << endl; 

    return 0;
}