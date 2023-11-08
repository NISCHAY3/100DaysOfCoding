// Question Link-->https://practice.geeksforgeeks.org/problems/burning-tree/1Telegram-

//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  private:
    Node* createParentMapping(Node* root, int target, map<Node*, Node*>&nodeToParent){
        Node* targetNode = NULL;
        
        queue<Node*>q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            Node* current = q.front();
            q.pop();
            
            if(current->data == target) targetNode = current;
            if(current->left){
                nodeToParent[current->left] = current;
                q.push(current->left);
            }
            if(current->right){
                nodeToParent[current->right] = current;
                q.push(current->right);
            }
        }
        return targetNode;
    }
    
    void burnTree(Node* root, map<Node*, Node*>&nodeToParent, int &time){
        map<Node*, bool>visited;
        queue<Node*>q;
        
        q.push(root);
        visited[root] = true;

        while(!q.empty()){
            bool flag = false;
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* current = q.front();
                q.pop();
                
                if(current->left && !visited[current->left]){
                    flag = true;
                    q.push(current->left);
                    visited[current->left] = true;
                }
                if(current->right && !visited[current->right]){
                    flag = true;
                    q.push(current->right);
                    visited[current->right] = true;
                }
                if(nodeToParent[current] && !visited[nodeToParent[current]]){
                    flag = true;
                    q.push(nodeToParent[current]);
                    visited[nodeToParent[current]] = true;
                }
            }
            if(flag) time++;
        }
    }
    
  public:
    int minTime(Node* root, int target) {
        int time = 0;
        map<Node*, Node*>nodeToParent;
        
        Node* targetNode = createParentMapping(root, target, nodeToParent);
        burnTree(targetNode, nodeToParent, time);
        
        return time;
    }
};