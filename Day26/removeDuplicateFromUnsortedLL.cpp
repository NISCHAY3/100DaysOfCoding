// Question Link-->https://www.codingninjas.com/studio/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTab=1

#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    unordered_map<int , bool> visited;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL)
    {
        if(visited[temp->data] != true)
        {

            visited[temp->data] = true;

            prev = temp;

            temp = temp->next;

        }

        else

        {

            prev->next = temp->next;

            temp = prev->next;

        }

    }

    return head;
}   