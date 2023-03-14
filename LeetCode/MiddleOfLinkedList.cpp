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
    ListNode* middleNode(ListNode* head) {
        ListNode *s=head;
        ListNode *f=head;
        int len=0;
        while(head!=NULL)
        {
            len++;
            head=head->next;
        }
        
        while(f->next!=NULL&&f->next->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        if(len%2!=0)
        return s;
        else
        {
            
            return s->next;
        }
    }
};
