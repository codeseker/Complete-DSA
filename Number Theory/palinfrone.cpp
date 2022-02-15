#include <iostream>
using namespace std;


int main(){

   int n;
   cin>>n;

   int rev = 0;
   while(n>0){
       int last = n%10;
       rev = rev*10 + last;
       n = n/10;

   }
   if(rev == n){
       cout<<"Number is Palindrome"<<endl;
   }
   else{
       cout<<"Number is not Palindrome"<<endl;
   }




    return 0;
}