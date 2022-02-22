#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

char binarySearchVowel(char arr[], int n, char target)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return arr[mid + 1];
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
char binarySearchConsonant(char arr[], int n, char target)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return arr[mid - 1];
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
string encodeString(string &s, int n)
{
    // Write your code here.
    // O(NLOGN) approach
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int i = 0;
    int j = 0;
    string ans;

    while (i < n)
    {
        char ch = s[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            ans.push_back(binarySearchVowel(alpha, 26, ch));
        }
        else
        {
            ans.push_back(binarySearchConsonant(alpha, 26, ch));
        }
        i++;
    }
    return ans;
}

vector<char> encode(string &s, int n, vector<char> &ans)
{
    stack<char> st;
    //vector<char> ans;
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    for (int i = (alpha.length() - 1); i >= 0; i--)
    {
        char ch = alpha[i];
        st.push(ch);
    }
    int i = 0;
     while(i<n)
     {
        char ch = s[i];

        if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u')
        {
            char top;
            while (st.top() != ch)
            {
                top = st.top();
                st.pop();
            }
            st.pop();
            top = st.top();
           // cout << top << endl;
           ans.push_back(top);
        }
        else{
            char top ;
            while(st.top() != ch)
            {
                top = st.top();
                st.pop();
            }
           // cout<<top<<endl;
            ans.push_back(top);
        }
        i++;
    }
    return ans;
}

int main()
{

    string s = "code";
    // cout<<encodeString(s,s.length());
    vector<char> ans;
    encode(s,s.length(),ans);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}