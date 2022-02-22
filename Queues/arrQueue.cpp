#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int n)
    {
        size = n;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear < size)
        {
            arr[rear] = data;
            rear++;
        }
        else
        {
            cout << "Queue is full" << endl;
        }
    }

    int pop()
    {
        if (rear == front)
        {
            cout << "No element to pop" << endl;
            return -1;
        }
        else
        {
            int ans = arr[front];
            front++;
            return ans;
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int top()
    {
        if (rear == front)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{

    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    //  q.push(6);
    cout << "Front is: " << q.top() << endl;
    q.pop();
    cout << "Front is: " << q.top() << endl;
    if (q.isEmpty())
    {
        cout << "Empty queue" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }

    return 0;
}