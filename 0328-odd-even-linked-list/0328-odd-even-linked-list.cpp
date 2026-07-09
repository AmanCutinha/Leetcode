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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> a;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) return head;

        while(temp!=nullptr && temp->next!=nullptr){
            a.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp) a.push_back(temp->val);

        temp=head->next;
        while(temp!=nullptr && temp->next!=nullptr){
            a.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp) a.push_back(temp->val);

        temp=head;
        for(int i=0;i<a.size();i++){
            temp->val=a[i];
            temp=temp->next;
        }
        return head;
    }
};