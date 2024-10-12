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
        ListNode* trav=head;
        ListNode* trav2=head;
        while(trav2!=nullptr && trav2->next!=nullptr){
            
            trav=trav->next;
            trav2=trav2->next->next;
            if(trav==trav2){
                return true;
            }
            

        }
        return false;
    }
};