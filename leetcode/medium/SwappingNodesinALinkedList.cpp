// Link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> holder;
        for(ListNode* current = head; current ; current = current->next) 
            holder.push_back(current->val);
        
        int n = int(holder.size());
        swap(holder[k-1], holder[n-k]);
        
        ListNode* newHead = new ListNode(holder[0]);
        ListNode* current = newHead;
        
        for(int i = 1; i < n; i++) {
            ListNode* newNode = new ListNode(holder[i]);
            current->next = newNode;
            current = current->next;
        }
        return newHead;
    }
};