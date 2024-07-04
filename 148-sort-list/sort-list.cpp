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
    ListNode* sortList(ListNode* head) {
        ListNode* trav=head;
        vector<int>v;
        while(trav ){
            v.push_back(trav->val);
            trav=trav->next;
        }
        sort(v.begin(),v.end());
        int n=v.size();
        trav=head;
        for(int i=0;i<n;i++){
            trav->val=v[i];
            trav=trav->next;
        }
        return head;
    }
};