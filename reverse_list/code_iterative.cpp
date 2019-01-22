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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev, *cur, *next;
        prev = nullptr;
        cur = head;
        while(cur != nullptr){
            next=cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
    
    return prev;
    }
};
