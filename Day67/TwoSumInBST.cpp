// Question Link-->https://www.codingninjas.com/studio/problems/two-sum-in-a-bst_1062631?leftPanelTab=0&leftPanelTabValue=PROBLEM

void inorder(BinaryTreeNode<int>* root, vector<int>&res){
    if(!root) return;
    inorder(root->left, res);
    res.push_back(root->data);
    inorder(root->right, res);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int>res;
    inorder(root, res);
    int i=0, j=res.size()-1;
    while(i<j){
        if(res[i]+res[j]==target) return true;
        else if(res[i]+res[j] < target) i++;
        else j--;
    }
    return false;
}
