#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans1 = 0;
    int ans2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                ans1 = ans1 + arr[i][j];
            }
            if ((i + j) == (n - 1))
            {
                ans2 = ans2 + arr[i][j];
            }
        }
    }

    int ans = ans1 - ans2;
    if (ans < 0)
    {
        ans = -(ans);
        cout << ans << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}