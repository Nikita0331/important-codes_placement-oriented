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
        if(head==NULL)
        return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *h=head->next;
        ListNode *ol=NULL;
        ListNode *el=NULL;
        // ListNode *r=head->next->next;
        // ListNode *s=head->next->next->next;
        
        if(head->next==NULL)
        return head;
        while(odd->next||even->next)
        {
            if(odd->next)
            {
                ol=odd->next->next;
                if(ol)
                {odd->next=ol;
                odd=ol;}
                else
                odd->next=NULL;
            }
            if(even->next)
            {
                el=even->next->next;
                if(el)
                {even->next=el;
                even=el;}
                else
                even->next=NULL;
            }
        }   
        odd->next=h;

        return head;    
    }
};
