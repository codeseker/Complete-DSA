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
    float p = 0;
    float z = 0;
    float k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
        else if (arr[i] == 0)
        {
            z++;
        }
        else
        {
            k++;
        }
    }
    double pos = (p / n);
    float neg = (k / n);
    float zer = (z / n);

    cout << pos << endl;
    cout << neg << endl;
    cout << zer << endl;

    return 0;
}