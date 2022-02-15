#include <iostream>
using namespace std;

int main(){
 
     char a;     
     cout<<"Enter your character: ";
     cin>>a;

     
     switch (a)
     {
     case 'A':
         cout<<"Hello"<<endl;
         break;
     
     default:
     cout<<"Still Learning"<<endl;
         break;
     }
  



    return 0;
}