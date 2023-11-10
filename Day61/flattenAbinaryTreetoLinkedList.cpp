// Question Link-->https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1

//User function Template for C++

class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* current=root;
        while(current !=NULL){
            
            if(current->left){
                Node* pred=current->left;
                while(pred->right){
                    
                    pred=pred->right;
                    
                }
                pred->right= current->right;
                current->right=current->left;
            }
            current=current->right;
        }
        current=root;
        while(current!=NULL){
            current->left=NULL;
            current=current->right;
        }
    }
};