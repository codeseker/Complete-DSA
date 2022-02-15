#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n1, n2;
    cin >> n1 >> n2;

    int max,min;

    if (n1 > n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        max = n2;
        min = n1;
    }

    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}