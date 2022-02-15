#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string str = "HDSGHSDGUAGAU";
    // Convert to Lower Case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;


    // Convert to Uppercase

     for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    cout<<str<<endl;


    // Inbuilt Function for Upper case

    string abc = "dfdfhudfhsdifh";

    transform(abc.begin(), abc.end(), abc.begin() ,::toupper);

    cout<<abc<<endl;

    string xyz = "SAJFSFHSUIDFH";

    transform(xyz.begin(), xyz.end(), xyz.begin() , ::tolower);

    cout<<xyz<<endl;

    return 0;
}