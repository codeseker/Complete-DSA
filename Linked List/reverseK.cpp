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
    int cnt = 0;

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
Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *frwrd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwrd;
    }

    return prev;
}

void revK(Node *&head, int k)
{
    int cnt = 1;

    Node *temp = head;

    while (cnt != k)
    {
        temp = temp->next;
        cnt++;
    }

    reverse(head);
}

int main()
{

    Node *node1 = new Node(1);
    Node *head = node1;
    //print(head);
    Node *tail = head;
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);

    print(head);

    revK(head, 3);
    print(head);

    return 0;
}