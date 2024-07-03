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
        ListNode* fast=head;
        ListNode* slow=head;
        int cnt=1;
        
        while(fast!=NULL){
            if(cnt%2==0){
                slow=slow->next;
            }
            fast=fast->next;
            cnt++;
        }
        if(cnt==1){
            return slow;
        }
        
        return slow;
    }
};