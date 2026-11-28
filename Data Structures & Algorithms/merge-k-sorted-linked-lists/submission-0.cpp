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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        vector<int> num;
        
        for(int i=0; i<n; i++){
            while(lists[i] != NULL){
                num.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tummy = dummy;
        sort(num.begin(), num.end());
        for(int x:num){
            tummy->next = new ListNode(x);
            tummy = tummy->next;
        }
        return dummy->next;
    }
};
