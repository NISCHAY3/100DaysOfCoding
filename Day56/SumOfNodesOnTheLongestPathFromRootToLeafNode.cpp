// Question Link-->https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1


class Solution
{
public:

    void solve(Node* root,int sum,int &maxSum,int length,int &maxi){
        if(root==NULL){
            if(length>maxi){
                maxi=length;
                maxSum=sum;
            }
            
            else if(length==maxi){
                maxSum=max(sum,maxSum);
            }
            return;
        
        }
        sum=sum+root->data;
        solve(root->left,sum,maxSum,length+1,maxi);
        solve(root->right,sum,maxSum,length+1,maxi);
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int length;
        int maxi=0;
        int sum=0;
        int maxSum=INT_MIN;
        solve(root,sum,maxSum,length,maxi);
        return maxSum;
    }
};