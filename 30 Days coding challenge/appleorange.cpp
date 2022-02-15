#include <iostream>
using namespace std;

int main()
{

    int s, t;
    cin >> s >> t;

    int a, b;
    cin >> a >> b;

    int m, n;
    cin >> m >> n;

    int apple[m];
    int orange[n];

    int ans1 = 0;
    int ans2 = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> apple[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> orange[i];
    }

    for (int i = 0; i < m; i++)
    {
        apple[i] = apple[i] + a;
    }
    for (int i = 0; i < m; i++)
    {
        if (apple[i] >= s && apple[i] <= t)
        {
            ans1++;
        }
    }
    cout << ans1 << endl;

    for (int i = 0; i < n; i++)
    {
        orange[i] = orange[i] + b;
    }
    for (int i = 0; i < n; i++)
    {
        if (orange[i] >= s && orange[i] <= t)
        {
            ans2++;
        }
    }
    cout << ans2 << endl;

    return 0;
}