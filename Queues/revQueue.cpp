#include <iostream>
#include <queue>
#include<stack>
using namespace std;

queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> st;
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        st.push(top);
    }
    
    queue<int> ans;
    
    while(!st.empty())
    {
        int top = st.top();
        st.pop();
        ans.push(top);
    }
    return ans;
}

int main(){


    queue<int> q;
    

    return 0;
}