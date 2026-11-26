#include <vector>
using namespace std;

class Solution {
public:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(nullptr) {}
    };

    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<ListNode*> nodes(n);

        for (int i = 0; i < n; ++i) {
            nodes[i] = new ListNode(i);
        }

        for (int i = 0; i < n; ++i) {
            nodes[i]->next = nodes[nums[i]];
        }

        ListNode* head = nodes[0];
        ListNode* slow = head;
        ListNode* fast = head;

        do {
            slow = slow->next;
            fast = fast->next->next;
        } while (slow != fast);

        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        int duplicate = slow->val;

        for (ListNode* node : nodes) {
            delete node;
        }

        return duplicate;
    }
};
