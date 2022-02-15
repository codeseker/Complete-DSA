#include <iostream>
using namespace std;

int main()
{

    int n, pos;
    cin >> n >> pos;

    int mask = 1 << pos;
    int result = (n | mask);
    cout << result << endl;

    return 0;
}