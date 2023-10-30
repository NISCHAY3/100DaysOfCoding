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
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "enter data for right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);

    q.push(NULL); // seprator

    while (!q.empty())
    {
        node *temp = q.front();

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

void inorder(node *root)
{
    // left---node---right

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    // node--left--right

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{

    // left--right--root
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{

    node *root = NULL;

    root = buildTree(root); // tree created
    levelOrderTraversal(root);

    cout << "inorder result: ";
    inorder(root);
    cout << endl;

    cout << "preorder result: ";
    preorder(root);
    cout << endl;
    cout << "postorder result: ";
    postorder(root);

    return 0;
}
