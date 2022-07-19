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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1 || head == NULL)
            return head;
        
        ListNode* pre = new ListNode(-1,head);
        ListNode* ans = pre;
        ListNode* begin;
        ListNode* end;
        ListNode* node = head;
        int cnt = 1;
        
        while(node != NULL){
            cnt = 1;
            begin = node;
            while(node!=NULL && cnt<k){
                node = node->next;
                if(node!=NULL)
                    cnt++;
            }
            if(cnt<k)   break;
            end=node;
            if(node != NULL){
                node=node->next;
                end->next = NULL;
            }
                
            ListNode* next;
            ListNode* temp = node;
            end = begin;
            while(begin != NULL){
                next = begin->next;
                begin->next = temp;
                temp = begin;
                begin = next;
            }
            pre->next = temp;
            pre = end;
        }
        
        return ans->next;
    }
};