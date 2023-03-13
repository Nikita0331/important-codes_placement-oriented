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
    
    bool isPalindrome(ListNode* head) {
        int c=1;
        ListNode *s=head;
        ListNode *f=head;
     while( f->next!=NULL &&f->next->next!=NULL && f!=NULL)
     {
        s=s->next;
        f=f->next->next;

     }
     ListNode *a=reverseList(s);
     f=head;
     while(a->next!=NULL){
           if(f->val!=a->val) return false;
           f=f->next;
           a=a->next;
     }
    // cout<<s->val;
     
return 1;
    }
};
