// Question Link-->https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int>s;
    
    for(int i=0;i<k;i++){
        int value=q.front();
        q.pop();
        s.push(value);
        
        
    }
    
    while(!s.empty()){
        int val=s.top();
        s.pop();
        q.push(val);
        
    }
    
    int a=q.size()-k;
    while(a--){
        int value=q.front();
        q.pop();
        q.push(value);
        
        
    }
    return q;   
}