#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n > 0 || n < 0)
    {
        long int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;
    }
    return rev;
}
void say(int n, string arr[], int k)
{

   
    // base case
    if (n <= 0)
    {
        return;
    }
    // recursive
    int last = n % 10;
    for (int i = 0; i < 10; i++)
    {
        if (last == i)
        {
            cout << arr[i] << " ";
            break;
        }
    }
    n = n / 10;
    say(n, arr, k);
}

int main()
{

    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;
    int j = reverse(n);
   //cout<<n<<endl;
    int k = sizeof(arr) / sizeof(arr[0]);
    say(j, arr, k);

    return 0;
}