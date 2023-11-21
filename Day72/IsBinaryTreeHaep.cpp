// Question Link-->https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1


class Solution {
  public:
  
  
  
  
    int countNode(struct Node* root){
        
        if(root==NULL)
        {
            return 0;
        }
        
        int ans=1+countNode(root->left)+countNode(root->right);
        return ans;
        
    }
    
    bool isCBT(struct Node* root,int index, int count){
        if(root==NULL){
            return true;
        }
        
        if(index>= count){
            return false;
        }
        
        else{
            
            bool left=isCBT(root->left,2*index+1,count);
            bool right=isCBT(root->right,2*index+2,count);
            
            return (left&& right);
            
            
        }
        
        
    }
    
    bool isMax(struct Node* root){
        
        if(root->left==NULL && root->right==NULL){
            return true;
            
        }
        
        if(root->right==NULL){
            return (root->data >root->left->data);
        }
        
        else{
            
            bool left=isMax(root->left);
            bool right=isMax(root->right);
            
            
            return(left && right && (root->data > root->left->data && root->data >root->right->data));
            
        }
    }
    
    
    
    
    bool isHeap(struct Node* root) {
        int index=0;
        
        int totalCount=countNode(root);
        
        if(isCBT(root,index,totalCount) && isMax(root)){
            return true;
        }
        else{
            return false;
        }
    }
};