// question link-->https://www.codingninjas.com/studio/problems/unique-sorted-list_2420283?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan

/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    if(head==NULL){
        return NULL;
 
    }
    Node*current=head;


    while(current!=NULL){

        if(current->next !=NULL && current->data == current->next->data){
            Node* next_next = current->next->next;
            Node*nodeToRemove=current->next;
            delete(nodeToRemove);
            current->next=next_next;


        }

        else{
            current=current->next;

        }


    }
    return head;



}
