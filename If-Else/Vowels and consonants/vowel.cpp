#include <iostream>
using namespace std; 


int main (){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

  char c;
int isLowercaseVowel, isUppercaseVowel;

  cin>>c;

 isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
cout << c << " is a vowel.";
     else{
         cout<< "Consonants"<<endl;
     }
     
    return 0;
}