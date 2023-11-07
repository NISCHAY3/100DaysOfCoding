// Question Link-->https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1



/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
int findPosition(int in[], int element, int inIdxStart, int inIdxEnd){
    for(int i=inIdxStart; i<=inIdxEnd; i++){
        if(in[i]==element) return i;
    }
    return -1;
}

Node* solve(int in[], int post[], int &postIdx, int inIdxStart, int inIdxEnd, int n){
    // base case
    if(postIdx < 0 || inIdxStart > inIdxEnd) return NULL;
    
    int element = post[postIdx--];
    Node* root = new Node(element);
    int position = findPosition(in, element, inIdxStart, inIdxEnd);
    
    root->right = solve(in, post, postIdx, position+1, inIdxEnd, n);
    root->left = solve(in, post, postIdx, inIdxStart, position-1, n);
    
    return root;
}

Node *buildTree(int in[], int post[], int n) {
    int postIdx = n-1;
    return solve(in, post, postIdx, 0, n-1, n);
}