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
    ListNode* reversea(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        if(head==nullptr && head->next==nullptr) return true;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* sec=reversea(slow->next);
        ListNode* first=head;
        ListNode* temp=sec;

        while(temp){
            if(first->val!=temp->val) return false;
            temp=temp->next;
            first=first->next;
        }
        return true;
    }
};