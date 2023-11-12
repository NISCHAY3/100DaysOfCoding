#include <iostream>
#include <queue>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    q.push(NULL); // seprator

    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL) // level completely traveresed
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

Node *insertInBST(Node *root, int d)
{

    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertInBST(root->right, d);
    }
    else
    {
        root->left = insertInBST(root->left, d);
    }
    return root;
}

Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
}

int main()
{

    Node *root = NULL;
    cout << "enter data to create BST" << endl;
    takeInput(root);
    cout << "printing the BST" << endl;
    levelOrderTraversal(root);

    cout << "min val is " << minVal(root) << endl;
    cout << "max val is " << maxVal(root) << endl;

    return 0;
}
