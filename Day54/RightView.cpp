// Question Link-->https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    
    void solve(Node* root, vector<int>&ans,int level){
    
    if(root==NULL){
        return ;
    }
    
    
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    
    solve(root->right,ans,level+1);
    solve(root->left,ans,level+1);
   
    
}
    
    
    vector<int> rightView(Node *root)
    {
        vector<int > ans;
        solve(root,ans,0);
        return ans;
    }
};
