// question link-->https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=1

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    { 
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    int count0=0;
    int count1=0;
    int count2=0;

    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            count0++;
        }
        else if(temp->data==1){
            count1++;
        }
        else if(temp->data==2){
            count2++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(count0 !=0){
            temp->data=0;
            count0--;  
        }
        else if(count1 !=0){
            temp->data=1;
            count1--; 
        }
        else if(count2 !=0){
            temp->data=2;
            count2--;  
        }
        temp=temp->next;
    }

    return head;
    





}