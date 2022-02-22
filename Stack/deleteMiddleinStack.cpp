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
    if(cnt == size/2){
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    solve(s,cnt+1,size);

    s.push(num);
}

void deleteMid(stack<int>& s)
{
    int cnt = 0;
    int n = s.size();
    solve(s,cnt,n);
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

    deleteMid(s);
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