#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "enter data: ";
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data to insert in left of: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data to insert in right of: " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR rule
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return; // base case
    }

    // NLR rule
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{
    // base case

    if (root == NULL)
    {

        return;
    }

    // LRN rule
    postOrder(root->left);
    postOrder(root->right);
    // cout << root->data << " ";
}
int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = sum(root->left);
    int right = sum(root->right);

    int ans = left + right + root->data;

    return ans;
}

void printRight(node *root)
{
    if (root == NULL)
    {
        return;
    }

    // RN
    printRight(root->right);
    cout << root->data << " ";
}
void printLeft(node *root)
{
    if (root == NULL)
    {
        return;
    }

    // LN
    cout << root->data << " ";
    printLeft(root->left);
}

void diagonal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    if (root->right)
    {
        diagonal(root->right);
        diagonal(root->left);
    }
}

int main()
{

    node *root = NULL;
    root = buildTree(root);
    // 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
    // levelOrderTraversal(root);

    // inOrder(root);
    // preOrder(root);
    // postOrder(root);
    // cout<<sum(root)<<endl;

    // printLeft(root);
    diagonal(root);

    return 0;
}