#include <iostream>
using namespace std;
int main()
{

    int n, pos;
    cin >> n >> pos;

    int mask = 1 << pos;
    if ((n & mask) != 0)
    {
        cout << "Bit is one" << endl;
    }
    else
    {
        cout << "Bit is zero" << endl;
    }
    return 0;
}