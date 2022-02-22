#include <iostream>
#include <stack>

using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    // base case
    if(myStack.empty())
    {
        myStack.push(x);
        return myStack;
    }
    
    int num = myStack.top();
    myStack.pop();
    
    pushAtBottom(myStack,x);
     myStack.push(num);
    
    return myStack;
}


int main(){


    return 0;
}