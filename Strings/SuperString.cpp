#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int n = s.length();

    for (int i = 1; i < n - 1; i++)
    {

         if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            i = i + 2;
            if (i == n - 1)
            {
                break;
            }
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}