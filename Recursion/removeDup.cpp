#include <iostream>
using namespace std;

void remove(string s,int n, int i)
{
    // base case
    if(n == 0)
    {
        return;
    }

    // recursion
    if(s[i] == s[i+1] )
    {
        cout<<s[i];
        i = i+2;
        n = n-2;
        remove(s,n,i);
    }
    else{
        cout<<s[i];
        i = i+1;
        n = n-1;
        remove(s,n,i);
    }
}


int main(){


    string s;
    cin>>s;
    int n = s.length();
    remove(s,n,0);


    return 0;
}