#include <iostream>
using namespace std;

class kQueue
{

public:
    int n;
    int k;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freeSpot;

    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        arr = new int[n];
        for(int i=0; i<k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for(int i=0; i<n; i++)
        {
            next[i] = i+1;
        }
        next[n-1] = -1;

        freeSpot = 0;
    }

    void push(int data, int qn)
    {
        if(freeSpot == -1)
        {
            cout<<"No space available to push"<<endl;
            return;
        }
        
        // find index
        int index = freeSpot;

        // freeSpot update
        freeSpot = next[index];

        // if element is first element
        if(front[qn-1] == -1)
        {
            front[qn-1] = index;
        }
        else{
            next[rear[qn-1]] = index;
        }

        // update next
        next[index] = -1;

        // update rear
        rear[qn-1] = index;
        arr[index] = data;
    }

    int pop(int qn)
    {
        if(front[qn-1] == -1)
        {
            cout<<"No elements to pop"<<endl;
            return -1;
        }

        // find index
        int index = front[qn-1];

        // update front
        front[qn-1] = next[index];

        // update freeSpot 
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
    }

};

int main(){

     
    kQueue q(10,3);
    q.push(10,1);
    q.push(14,1);
    q.push(56,1);
    q.push(2,2);
    q.push(6,3);
    q.push(20,1);
    cout<<q.pop(1)<<endl;
    cout<<q.pop(2)<<endl;
    cout<<q.pop(3)<<endl;
    cout<<q.pop(1)<<endl;
    cout<<q.pop(1)<<endl;
    cout<<q.pop(1)<<endl;
    cout<<q.pop(1)<<endl;



    return 0;
}