/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        if (fast) 
            slow = slow->next;
        ListNode* curr=slow;
        
        ListNode* prev=nullptr;
        while(curr!=nullptr)
        {
            ListNode* nextn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextn;
        }
        ListNode * temp=head;
        while(prev)
        {
            if(temp->val!=prev->val)
            return false;
            temp=temp->next;
            prev=prev->next;
        }
        return true;

        
    }
};