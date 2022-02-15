#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cin >> s;
    //AM
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
            s.erase(8, 2);
        }
    }
    //PM
    else
    {
        if (s[0] == '0' || s[1] != '2')
        {
            s[0] = s[0] + 1;
            s[1] = s[1] + 2;
        }
        else
        {
            s.erase(8, 2);
        }
    }
    s.erase(8,2);

    cout << s << endl;

    return 0;
}