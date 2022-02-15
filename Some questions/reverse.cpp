#include <iostream>
using namespace std;

int main()
{

  long int n;
   cin >> n;

   long int reverse = 0;
   while (n > 0 || n<0)
   {
     long int lastdigit = n % 10;
      reverse = reverse * 10 + lastdigit;
      n = n / 10;
   }
   cout << reverse << endl;

   return 0;
}