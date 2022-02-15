#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // new temp node
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

int length(Node *&head)
{
    Node *temp = head;
    int cnt = 1;

    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}

void print(Node *&head)
{
    // new pointer temp
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// approach O(N^2)
void removeDup(Node *&head)
{
    // Write your code here
    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        Node *prev = curr;

        while (temp != NULL)
        {
            if (curr->data == temp->data)
            {
                Node *todel = temp;
                prev->next = temp->next;
                temp = prev->next;
                delete todel;
            }
            else
            {
                temp = temp->next;
                prev = prev->next;
            }
        }
        curr = curr->next;
    }
}

// another approach sort list O(NLOGN) and traverse O(N)




int main()
{

    Node *node1 = new Node(1);
    // 4 2 5 4 2 2 NULL
    // 1 2 1 2 2 2 7 7 -1
    Node *head = node1;
    Node *tail = head;
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 7);
    insertAtTail(tail, 7);
    //print(head);

    removeDup(head);
    print(head);

    return 0;
}