/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        
        ListNode *s=head;
        ListNode *f=head;
        while(f->next && f->next->next)
        {
            f=f->next->next;
            s=s->next;
            if(f==s)
                return true;
        }
        return false;
    }
};