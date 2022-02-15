#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary = primary + mat[i][j];
            }
            if ((i + j) == (n - 1))
            {
                secondary = secondary + mat[i][j];
            }
        }
    }

    int result = ((primary + secondary) - mat[1][1]);
    cout << result << endl;

    return 0;
}