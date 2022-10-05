/*
https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
*/

Node* reverseDLL(Node * head)
{
    //Your code here
    if(!head && !head->next) return head;
    Node* temp=head;
    Node* frd=head;
    Node* pre=nullptr;
    while(temp->next){
        frd=temp->next;
        temp->next=pre;
        temp->prev=frd;
        pre=temp;
        temp=frd;
    }
    temp->next=pre;
    temp->prev=nullptr;
    return temp;
}