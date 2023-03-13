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
    
    void reorderList(ListNode* head) {
          ListNode *s=head;
        ListNode *f=head;
     while( f->next!=NULL &&f->next->next!=NULL && f!=NULL)
     {
        s=s->next;
        f=f->next->next;

     }
    
     ListNode *a=reverseList(s);
      cout<<a->val;
     ListNode *p=head;
     ListNode *q=head->next;
     ListNode *r=a;
     ListNode *t=a->next;
     while(q!=NULL){
         p->next=r;
         r->next=q;
         p=q;
         q=q->next;
         r=t;
         t=t->next;


     }
     p->next=r;
     r->next=q;
    // return head;
    }
};
