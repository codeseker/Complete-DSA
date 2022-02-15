#include <iostream>
using namespace std;

void replace(string s, int n, int i)
{
    // base case
    if (n == 0)
    {
        return;
    }

    if (s[i] == 'p' && s[i + 1] == 'i')
    {
        cout << "3.14";
        i = i + 2;
        n = n - 2;
        replace(s, n, i);
    }
    else
    {
        cout << s[i];
        i = i + 1;
        n = n - 1;
        replace(s, n, i);
    }
}

int main()
{

    string s;
    cin >> s;
    int n = s.length();

    // string ans;
    replace(s, n, 0);

    return 0;
}