// Question Link-->https://www.geeksforgeeks.org/problems/construct-tree-1/1


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    private:
    int findPosition(int in[], int element, int inIdxStart, int inIdxEnd){
        for(int i=inIdxStart; i<=inIdxEnd; i++){
            if(in[i] == element) return i;
        }
        return -1;
    }
    
    Node* solve(int in[], int pre[], int &preIdx, int inIdxStart, int inIdxEnd, int n){
        // base case
        if(preIdx >= n || inIdxStart > inIdxEnd) return NULL;
        
        int element = pre[preIdx++];
        Node* root = new Node(element);
        int position = findPosition(in, element, inIdxStart, inIdxEnd);
        
        // recursive calls
        root->left = solve(in, pre, preIdx, inIdxStart, position-1, n);
        root->right = solve(in, pre, preIdx, position+1, inIdxEnd, n);
        
        return root;
    }
    
    public:
    Node* buildTree(int in[],int pre[], int n){
        int preIdx = 0;
        Node* ans = solve(in, pre, preIdx, 0, n-1, n);
        return ans;
    }
};