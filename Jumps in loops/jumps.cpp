#include <iostream>
using namespace std;

int main(){   

     int i;
     cout<<"Enter a positive No: ";
     cin>>i;

     for ( i = 1; i <= 20; i++)
     {
         if (i == 11)
         {
             break;
         }
         cout<<i<<endl;
     }
     




    return 0;
}