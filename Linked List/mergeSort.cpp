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
    // new temp Node
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // new Node
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
    // mow create a Node
    Node *NodeToInsert = new Node(data);

    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
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
Node* getMid(Node* &head)
{
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node* merge(Node* &left, Node*&right)
{
    Node* dummy = new Node(-1);
    Node* p = dummy;

    while(left != NULL && right != NULL)
    {
        if(left->data <= right->data)
        {
            p->next = left;
            left = left->next;
            p = p->next;
        }
        else{
            p->next = right;
            right = right->next;
            p = p->next;
        }
    }

    while(left != NULL)
    {
    p->next = left;
            left = left->next;
            p = p->next;    
    }
    while(right != NULL)
    {
         p->next = right;
            right = right->next;
            p = p->next;
    }

    return dummy->next;
}

Node* mergeSort(Node* &head)
{
    // base case
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node* mid = getMid(head);
   
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node* ans = merge(left, right);
    return ans;

}

int main()
{

    Node *Node1 = new Node(10);

    Node *head = Node1;
    Node *tail = head;
    insertAtTail(tail, 12);
    insertAtTail(tail, 62);
    insertAtTail(tail, 2);
    insertAtTail(tail, 4);

    print(head);

    Node* ans = mergeSort(head);
    print(ans);
    return 0;
}