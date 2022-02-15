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

    int q;
    cin >> q;

    int sum = 0;

    while (q-- > 0)
    {

        long long int l, r;
        cin >> l >> r;

        for (int i = l; i < r; i++)
        {
            sum = sum + arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}