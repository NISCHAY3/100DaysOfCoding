// Question Link-->https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?leftPanelTab=1


void inorder(BinaryTreeNode<int> *root,int &count)
{
    // left---node---right

    if (root == NULL)
    {
        return;
    }

    inorder(root->left,count);

    if(root->left==NULL && root->right==NULL){
        count++;
    }

    inorder(root->right,count);
}


int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count=0;
    inorder(root,count);
    return count;

}