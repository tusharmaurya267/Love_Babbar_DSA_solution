/*
https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
*/

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* l1=head1;
    Node* l2=head2;
    Node* l3=nullptr;
    Node* l4=nullptr;
    int count1=0,count2=0;
    int flag=0;
    while(l1){
        count1++;
        l1=l1->next;
    }
    while(l2){
        count2++;
        l2=l2->next;
    }
    
    if(count1<count2){ l3=head2; l4=head1; }
    else{ l3=head1; l4=head2; }
    int diff=abs(count1-count2);
    
    while(diff>0){
        l3=l3->next;
        diff--;
    }

    while(l3 != l4){
        l3=l3->next;
        l4=l4->next;
    }
    int k=l3->data;
    return k;
}