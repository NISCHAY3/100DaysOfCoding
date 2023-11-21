// Question Link-->https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1

// User function Template for C++

class Solution{
    public:
    void heapify(vector<int>&a,int &n,int i){
        int index=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if(left<n && a[left]>a[index]){
            index=left;
        }
        if(right<n && a[right]>a[index]){
            index=right;
        }
        if(i!=index){
            swap(a[i],a[index]);
            heapify(a,n,index);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int &n, int m) {
        // your code here
        for(int i=0;i<m;i++){
            a.push_back(b[i]);
            n++;
        }
        for(int i=(n/2)-1;i>=0;i--){
            heapify(a,n,i);
        }
        return a;
    }
};