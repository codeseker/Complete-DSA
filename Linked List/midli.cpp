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

    while (temp->next != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    //cout<<temp->data<<endl;

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

Node *middle(Node *&head)
{
    int len = length(head);
    //cout<<len<<endl;
    if (len % 2 != 0)
    {
        int mid = (len + 1) / 2;
        int cnt = 1;
        Node *temp = head;

        while (cnt != mid)
        {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }
    else
    {
        int mid = (len + 2) / 2;

        int cnt = 1;
        Node *temp = head;

        while (cnt != mid)
        {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }
}
void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;

    delete temp;
}
void deleteAtPosition(Node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    else
    {

        int cnt = 1;
        Node *temp = head;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }

        temp->next = temp->next->next;

        delete temp->next;
    }
}

Node* deleteAtMiddle(Node* &head)
{
    int len = length(head);
    if(len % 2 != 0)
    {
        // odd
        int mid = (len+1)/2;

        deleteAtPosition(head,mid);
        return head;
    }
    else{
        int mid = (len+2)/2;

        deleteAtPosition(head,mid);
        return head;
    }
    
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
    // insertAtTail(tail, 1);
    // insertAtTail(tail, 2);
    // insertAtTail(tail, 6);

    print(head);
   // cout<<length(head)<<endl;
    deleteAtMiddle(head);
    print(head);

    return 0;
}