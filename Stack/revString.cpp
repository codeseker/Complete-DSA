#include <iostream>
#include<stack>
using namespace std;



int main(){


    string str = "Ayushayush";
   
    
    stack<char> s;
    
    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    // cout<<s.top()<<endl;

    
    string ans = "";

    while(!s.empty())
    {
        char ch = s.top();
        
        ans.push_back(ch);

        s.pop();
    }

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}