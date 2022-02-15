#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while ((t--) > 0)
    {
        int m, n;
        cin >> m >> n;
        int arr[n];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            cout<<endl;
        }

        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((arr[i]+arr[j]) == m)
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
        }

      
    }
    return 0;
}