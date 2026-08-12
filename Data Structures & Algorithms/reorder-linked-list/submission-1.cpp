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
    void reorderList(ListNode* head) {
        
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
        ListNode* curr=slow->next;
        slow->next=nullptr;
        ListNode* prev=nullptr;
        while(curr!=nullptr)
        {
            ListNode* nextn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextn;
        }
        ListNode* pt1=head;
        ListNode* pt2=prev;
        while(pt2!=nullptr)
        {
            ListNode* next1=pt1->next;
            ListNode* next2=pt2->next;
            pt1->next=pt2;
            pt2->next=next1;
            pt1=next1;
            pt2=next2;
        }
        


        
    }
};
