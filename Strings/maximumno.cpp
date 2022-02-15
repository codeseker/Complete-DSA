#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string str = "46327462346298";

    sort(str.begin(), str.end(), greater<int>());

    cout << str << endl;

    return 0;
}