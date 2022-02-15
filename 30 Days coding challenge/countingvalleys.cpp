#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    char arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 'D' && arr[i + 1] == 'D')
        {
            ans++;
            i = i + 2;
        }
    }
    cout << ans << endl;

    return 0;
}