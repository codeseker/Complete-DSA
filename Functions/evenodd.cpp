#include <iostream>
using namespace std;
 
int isEven(int n){
    return true;
}

int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        isEven(n);
        cout << "even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}