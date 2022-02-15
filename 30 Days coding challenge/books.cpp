#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    int arr[n ];
    int count = 0;
    int count1 = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
        cout<<arr[i]<<" ";
       

        // if (arr[i] || arr[i + 1] != p)
        // {
        //     count++;
        //     i = i + 2;
        // }
        // else
        // {
        //     break;
        // }
    }
    // cout << count << endl; 

    // for (int i = n; i >= 0; i--)
    // {
    //     if (arr[i] && arr[i + 1] != p)
    //     {
    //         count1++;
    //         i = i + 2;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout << count1 << endl; 
    return 0;
}