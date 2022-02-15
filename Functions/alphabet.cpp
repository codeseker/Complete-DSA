#include <iostream>
using namespace std;

char isAlpha(char abc)
{
    if ((c >= 'a'&& c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        cout << "Alphabet" << endl;
    }
    else
    {
        cout << "Not alphabet" << endl;
    }
    return isAlpha; 
}

int main()
{

    char ch;
    cin >> ch;

    char ans = isAlpha(abc);
    cout << ans << endl;

    return 0;
}