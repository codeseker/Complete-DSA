#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);

    head->prev = temp;
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
int length(node *&head)
{
    node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}
void insertAtPosition(node *&head, int pos, int data, node *&tail)
{
    int len = length(head);
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }
    else if (pos > len)
    {
        // insert at tail
        insertAtTail(tail, data);
        return;
    }
    else
    {

        int cnt = 1;
        node *temp = head;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }

        node *toInsert = new node(data);

        toInsert->prev = temp;
        toInsert->next = temp->next;
        temp->next->prev = toInsert;
        temp->next = toInsert;
    }
}

void deleteAtHead(node *&head)
{
    node *temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;

    delete temp;
}

void deleteAtTail(node *&tail)
{
    node *todel = tail;
    node *temp = tail;
    tail = temp->prev;
    temp->prev = NULL;
    tail->next = NULL;

    delete todel;
}

void deleteAtPosition(node *&head, node *&tail, int pos)
{
    int len = length(head);
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    else if (pos >= len)
    {
        // delete  at tail
        deleteAtTail(tail);
        return;
    }
    else
    {

        int cnt = 1;
        node *temp = head;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        // cout<<temp->data<<endl;
        node *todel = temp->next;
        temp->next->next->prev = temp;
        temp->next = temp->next->next;

        delete todel;
    }
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;
    // p //rint(head);

    insertAtHead(head, 20);
    // prin/t(head);
    // insertAtHead(head, 30);
    // print(head);

    node *tail = node1;

    // insertAtTail(tail, 20);
    // print(head);
    insertAtTail(tail, 25);
    print(head);
    // insertAtTail(tail, 2);
    // print(head);

    insertAtPosition(head, 1, 910, tail);
    print(head);

    deleteAtPosition(head, tail, 4);

    print(head);
    cout << "Tail " << tail->data << endl;

    return 0;
}