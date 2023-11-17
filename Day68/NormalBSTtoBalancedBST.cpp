// Question Link-->https://www.codingninjas.com/studio/problems/normal-bst-to-balanced-bst_920472?leftPanelTabValue=PROBLEM




void inorder(TreeNode<int>* root ,vector<int> &res){
    if(root==NULL){
        return ;
    }
    inorder(root->left,res);
    res.push_back(root->data);
    inorder(root->right,res);
}

TreeNode<int>* inorderToBST(int s,int e,vector<int> res){

    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;
    TreeNode<int>* root=new TreeNode<int>(res[mid]);

    root->left=inorderToBST(s,mid-1,res);
    root->right=inorderToBST(mid+1,e,res);

    return root;


    

}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int>res;
    inorder(root,res);

    return inorderToBST(0,res.size()-1,res);

}
