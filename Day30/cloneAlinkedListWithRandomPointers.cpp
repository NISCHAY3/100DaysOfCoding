// Question Link-->https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1


class Solution
{
    private:
    void insertAtTail(Node* &head ,Node* &tail,int d){
        
        Node* newNode=new Node(d);
        
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return ;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    
    public:
    Node *copyList(Node *head)
    {
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        
        Node*temp=head;
        while(temp!=NULL){
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
            
        }
        
        
        unordered_map<Node*,Node*>oldToNew;
        
        Node*originalNode=head;
        Node*cloneNode=cloneHead;
        while(originalNode !=NULL && cloneNode!=NULL){
            oldToNew[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        
        originalNode=head;
        cloneNode=cloneHead;
        
        while(originalNode!=NULL){
            
            cloneNode->arb=oldToNew[originalNode->arb];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
            
            
        }
        return cloneHead;
    }

};