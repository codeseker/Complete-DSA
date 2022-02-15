#include <iostream>
using namespace std;
int main()
{

    int n, a;
    cin >> n >> a;

    int arr[n];

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int p;
    cin >> p;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a == i)
        {
            k = arr[a];
        }
        sum = ((sum + arr[i]));
    }
    int topay = (sum - k) / 2;

    int ret = 0;

    if (p == topay)
    {
        cout << "Bon Appetit";
    }
    else
    {
        ret = (p - topay);
        cout << ret;
    }

    return 0;
}