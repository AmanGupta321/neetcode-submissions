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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int len = 0;

        if(head==NULL || head->next==NULL)
            return NULL;

        while(curr!=NULL){
            len++;
            curr=curr->next;
        }
        if(n==len)
            return head->next;
        int x = len-n-1;
        curr = head;
        while(x!=0){
            curr = curr->next;
            x--;
        }
        curr->next = curr->next->next;
        return head;
    }
};
