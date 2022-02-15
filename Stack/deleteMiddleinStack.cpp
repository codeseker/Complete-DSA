#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getLength(stack<int> s)
{
    int cnt = 0;
    while (!s.empty())
    {
        s.pop();
        cnt++;
    }

    return cnt;
}

void solve(stack<int>& s, int cnt, int size)
{
    // base case
    if(cnt == size/2)
    {
        s.pop();
        return;
    }


    int num = s.top();
    s.pop();

    solve(s,cnt+1,size);

    s.push(num);
}

void deleteMiddle(stack<int>& s, int N)
{
    int cnt = 0;
    solve(s,cnt,N);
}

int main()
{

    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(10);
    s.push(5);

    
    vector<int> v;

    while (!s.empty())
    {
        int n = s.top();
        v.push_back(n);
        s.pop();
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    if (v.size() % 2 != 0)
    {
        // odd
        int mid = (v.size() + 1) / 2;
        vector<int> ans;
        for (int i = 0; i < v.size(); i++)
        {
            if (i != mid - 1)
            {
                ans.push_back(v[i]);
            }
            else
            {
                continue;
            }
        }
        stack<int> ans1;
        for (int i = 0; i < ans.size(); i++)
        {
            int n = ans[i];
            ans1.push(n);
        }
    }
    else
    {
        int mid = (v.size() + 2) / 2;
        vector<int> ans;
        for (int i = 0; i < v.size(); i++)
        {
            if (i != mid - 1)
            {
                ans.push_back(v[i]);
            }
            else
            {
                continue;
            }
        }
        stack<int> ans1;
        for (int i = 0; i < ans.size(); i++)
        {
            int n = ans[i];
            ans1.push(n);
        }
    }
    
   int n = getLength(s);
   deleteMiddle(s,n);
//    cout<<n<<endl;

   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;
   s.pop();
   cout<<s.top()<<endl;

    return 0;
}