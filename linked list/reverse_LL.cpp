/*
https://leetcode.com/problems/reverse-linked-list/
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* frd=nullptr;
        ListNode* pre=nullptr;
            while(curr!=nullptr){
            frd=curr->next;
            curr->next=pre;
            pre=curr;
            curr=frd;
            }
        return pre;
    }
};