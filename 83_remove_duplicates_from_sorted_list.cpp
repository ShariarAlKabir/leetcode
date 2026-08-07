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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return head;
        ListNode* prev;
        ListNode* curr;
        prev=head;
        curr=head->next;
        while(curr!=nullptr){
            if(prev->val==curr->val){
                prev->next=curr->next;
                delete curr;
            }else{
                prev=prev->next;
            }
            if(prev==nullptr) {
                break;
            }
            curr=prev->next;
        }
        return head;
    }
};
