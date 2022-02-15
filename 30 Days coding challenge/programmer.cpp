#include <iostream>
using namespace std;

int main()
{

    int yy;
    cin >> yy;

    int day = 0;
    int leap = 244;
    int exact = 256;
    int noleap = 243;
    int unique = 230;
    if (yy <= 1917)
    {
        if ((yy % 4) == 0)
        {
            day = day + (exact - leap);
        }
        else
        {
            day = day + (exact - noleap);
        }
    } 
    else if (yy == 1918)
    {

        day = day + (exact - unique);
    }
    else if (yy >= 1919)
    {

        if ((yy % 400 == 0) || ((yy % 4 == 0) && (yy % 100 != 0)))
        {
            day = day + (exact - leap);
        }
        else
        {
            day = day + (exact - noleap);
        }
    }
    cout << day << ".09." << yy << endl;

    return 0;
}