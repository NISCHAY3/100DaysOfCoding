// Question Link-->https://www.codingninjas.com/studio/problems/h_920474?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM



void inorder(TreeNode *root,vector <int> &res){
    if(root==NULL){
        return;
    }
    inorder(root->left,res);
    res.push_back(root->data);
    inorder(root->right,res);
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)

{
    vector <int> res;
    inorder(root1,res);
    inorder(root2,res);
    sort(res.begin(),res.end());
    return res;
}