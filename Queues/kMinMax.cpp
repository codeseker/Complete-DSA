#include <iostream>
#include <queue>
using namespace std;

int solve(int *arr, int n, int k)
{
    // first window
    deque<int> maxi(k);
    deque<int> mini(k);

    for (int i = 0; i < k; i++)
    {
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

    // now another window
    int ans = 0;
    for (int i = k; i < n; i++)
    {
        ans += arr[maxi.front()] + arr[mini.front()];

        // removal

        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // additioon
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    ans += arr[maxi.front()] + arr[mini.front()];

    return ans;
}

int main()
{

    int arr[] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout<<n<<endl;
    cout<<solve(arr,n,k)<<endl;

    return 0;
}