// Question Link-->https://www.codingninjas.com/studio/problems/largest-bst-subtree_893103?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION

class info{

    public:

        int mini;

        int maxi;

        int size;

        bool isBST;

};

info solve(TreeNode * root, int &maxValue){

    

    if(root == NULL) return{INT_MAX, INT_MIN, 0, true};

    

    info left = solve(root->left, maxValue);

    info right = solve(root->right, maxValue);

 

    info currNode = {0, 0, 0, 1};

    

    currNode.mini = min(root->data, left.mini);

    currNode.maxi = max(root->data, left.maxi);

    currNode.size = left.size + right.size + 1;

 

    if((left.isBST and right.isBST) and (root->data > left.maxi and root->data < right.mini)) currNode.isBST = true;

    else currNode.isBST = false;

 

    if(currNode.isBST) maxValue = max(maxValue, currNode.size);

 

    return(currNode);

}

int largestBST(TreeNode * root){ 
    int maxValue = 0;
    info temp = solve(root, maxValue);
    return(maxValue);

}