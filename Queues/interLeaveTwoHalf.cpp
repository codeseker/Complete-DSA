#include <iostream>
#include<queue>
#include <stack>
using namespace std;

void printQueue(queue<int> q)
{
    while(!q.empty())
    {
        int val = q.front();
        q.pop();
        cout<<val<<" ";
    }
}

void interLeave(queue<int>& q)
{
     int n = q.size();
     stack<int> st;

     for(int i=0; i<n/2; i++)
     {
         int val = q.front();
         q.pop();
         st.push(val);
     }

     while(!st.empty())
     {
         int val = st.top();
         st.pop();
       //  cout<<val<<" ";
         q.push(val);
     }
  
    // n = q.size();
     
     for(int i=0; i<n/2; i++)
     {
         int val = q.front();
         q.pop();
         q.push(val);
     }

     for(int i=0; i<n/2; i++)
     {
         int val = q.front();
         q.pop();
         st.push(val);
     }
     
     while(!st.empty())
     {
         int val = st.top();
         st.pop();
         q.push(val);
         val = q.front();
         q.pop();
         q.push(val);
     }
     
     printQueue(q);
}

int main(){


    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    
    
    interLeave(q);


    return 0;
}