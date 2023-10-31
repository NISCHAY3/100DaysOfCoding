// Question Link-->https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

class Solution{
    
    private:
    int height(struct Node* node){
        
        if(node==NULL){
            return 0;
        }
        
        int left=height(node->left);
        int right=height(node->right);
        
        int ans=max(left,right)+1;
        return ans;
    }
    public:
    
    bool isBalanced(Node *root)
    {
        if(root==NULL){
            return true;
        }
        
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        
        bool difference=abs(height (root->left) - height(root->right))<=1;
        
        if(left && right && difference){
            return 1;
            
        }
        else{
            return false;
            
        }
        
    }
};
