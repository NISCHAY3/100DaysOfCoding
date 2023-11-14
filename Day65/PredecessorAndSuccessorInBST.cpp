// Question Link-->https://www.codingninjas.com/studio/problems/predecessor-and-successor-in-bst_893049?leftPanelTabValue=PROBLEM


pair<int, int> predecessorSuccessor(TreeNode *root, int key){
    int pred = -1;
    int succ = -1;

    TreeNode* temp = root;
    while(temp && temp->data != key){
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    if(temp){
      
        TreeNode* leftTree = temp->left;
        while(leftTree){
            pred = leftTree->data;
            leftTree = leftTree->right;
        }

  
        TreeNode* rightTree = temp->right;
        while(rightTree){
            succ = rightTree->data;
            rightTree = rightTree->left;
        }
    }

    return {pred, succ};
}