#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int sa, sb, sc;
    cin >> sa >> sb >> sc;

    if (sa == sb && sb == sc)
    {
        cout << "Equilateral. \n";
    }
    else if (sa == sb || sa == sc || sb == sc)
    {
        cout << "Isoceles. \n";
    }
    else
    {
        cout << "Scalene. \n";
    }

    return 0;
}