/*
https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {

        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(slow==fast){
            if(slow==head){
                while(fast->next != slow) fast=fast->next;
                fast->next=nullptr;
            }
            else{
                slow=head;
                while(slow->next != fast->next){
                    slow=slow->next;
                    fast=fast->next;
                }
                fast->next=nullptr;
            }
        }
        // Node* slow=head;
        // Node* fast=head;
        // Node* pre=nullptr;
        // while(fast && fast->next){
        //     slow=slow->next;
        //     fast=fast->next->next;
        //     if(slow==fast){
        //         slow=head;
        //         pre=fast;
        //         slow=slow->next;
        //         fast=fast->next;
        //         while(slow!=fast){
        //             pre=pre->next;
        //             fast=fast->next;
        //             slow=slow->next;
        //         }
        //     }
        // }
        // pre->next=nullptr;

    }
};