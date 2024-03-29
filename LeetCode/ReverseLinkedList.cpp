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
    ListNode* reverseList(ListNode* head) {
        ListNode *p=NULL;
        if(head==NULL) return head;
        ListNode *q=head,*r=head->next;
        while(r!=NULL){
            q->next=p;
            p=q;
            q=r;
            r=r->next;
        }
        q->next=p;
        return q;
    }
};
