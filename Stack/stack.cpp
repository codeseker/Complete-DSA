#include <iostream>
// #include<stack>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack is overflowed" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflowed" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top >= 0 && top < size)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{

    // stack is created of size 4
    Stack st(4);

    st.push(12);
    st.push(34);
    st.push(10);
    st.push(1);
    // st.push(89);

    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.isEmpty()<<endl;

    /*
    stack<int> s;

    s.push(9);
    s.push(2);
    s.push(10);


   s.pop();
   cout<<"Top element in stack is: "<<s.top()<<endl;



   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;
   */

    return 0;
}