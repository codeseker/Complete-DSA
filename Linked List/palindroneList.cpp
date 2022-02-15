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

    return cnt;
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int data)
{

    // insertion at starting
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // insertion a tail

    Node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insertion at tail
    if (temp->next == NULL)
    {
        insertAtTail(head, data);
        return;
    }
    // mow create a node
    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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

void deleteAtTail(Node *&tail, Node *&head)
{
    // int cnt = 1;
    Node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
        // cnt++;
    }
    temp->next = NULL;
    tail = temp;
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

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

void isPalindrone(Node *&head)
{
    int n = length(head);
    // cout<<n<<endl;
    /*
    int arr[n];
    int i=0;
    Node* temp = head;

    while(temp != NULL && i<n)
    {
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }

    printArray(arr,n);
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        if(arr[s] != arr[e])
        {
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;*/
    cout << n << endl;
    if (n % 2 == 0)
    {
        int mid = n / 2;
        int cnt = 1;
        Node *temp = head;

        while (cnt < mid)
        {
            temp = temp->next;
            cnt++;
        }
        reverse(temp->next);
    }
    else
    {
        int mid = (n + 1) / 2;
        int cnt = 1;
        Node *temp = head;

        while (cnt < mid)
        {
            temp = temp->next;
            cnt++;
        }
        cout << temp->data << endl;

        reverse(temp->next);
    }
}

int main()
{

    Node *node1 = new Node(1);

    Node *head = node1;
    Node *tail = node1;
    // print(head);

    insertAtTail(tail, 2);
    // print(head);
    insertAtTail(tail, 1);
    insertAtTail(tail, 5);
    insertAtTail(tail, 7);
    // print(head);

    print(head);

    isPalindrone(head);
    print(head);
    return 0;
}