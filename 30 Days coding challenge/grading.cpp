#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    

    int grades[n];

    for (int i = 0; i < n; i++)
    {

        cin >> grades[i];
    }
    int round = 0;
    for (int i = 0; i < n; i++)
    {
        int last = (grades[i] % 5);
        if (last == 1)
        {
            round = grades[i] + 4;
        }
        else if (last == 2)
        {
            round = grades[i] + 3;
        }
        else if (last == 3)
        {
            round = grades[i] + 2;
        }
        else if (last == 4)
        {
            round = grades[i] + 1;
        }
        else if (last == 0 || last == 5)
        {
            round = grades[i];
        }
        int temp = round;

        if (grades[i] >= 38)
        {
            if ((temp - grades[i]) < 3)
            {
                cout << temp << endl;
            }
            else if ((temp - grades[i]) == 0)
            {
                cout << grades[i] << endl;
            }
            else if ((temp - grades[i]) == 3)
            {
                cout << grades[i] << endl;
            }
            else
            {
                cout << grades[i] << endl;
            }
        }
        else
        {
            cout << grades[i] << endl;
        }
    }

    

    return 0;
}