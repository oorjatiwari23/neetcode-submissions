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
        ListNode* first=head;
        ListNode* second=head;
        
        
        while(second && second->next)
        {
            first=first->next;
            second=second->next->next;
            
        }
        ListNode* curr=first->next;
        first->next=nullptr;
        ListNode* prev=nullptr;
        
        while(curr!=nullptr)
        {
            ListNode* nextn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextn;
        }
        
        ListNode* pt1 = head;
ListNode* pt2 = prev; 

while(pt2)
{
    ListNode* temp1 = pt1->next;
    ListNode* temp2 = pt2->next;

    pt1->next = pt2;
    pt2->next = temp1;

    pt1 = temp1;
    pt2 = temp2;
}
       
    }
};
