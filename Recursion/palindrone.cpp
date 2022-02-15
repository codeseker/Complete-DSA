#include <iostream>
using namespace std;

bool check(string s, int i, int j)
{
    cout<<"Calls "<<s<<endl;
    // base case
    if (i > j)
    {
        return true;
    }

    // recursive call
    if (s[i] != s[j])
    {
        return false;
    }

    i++;
    j--;
    bool ans = check(s, i, j);

    return ans;
}

int main()
{

    string s = "abcdba";
    
    bool ans = check(s,0,s.length()-1);
    if(ans)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}