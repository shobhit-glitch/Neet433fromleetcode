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
    bool isPalindrome(ListNode* head) {
        //*************** [ BRUTE FORCE ] *************
        ListNode* trav=head;
        vector<int>v;
        while(trav!=NULL){
            v.push_back(trav->val);
            trav=trav->next;
        }
        int n=v.size();
        
        for(int i=0;i<n;i++){
            if(v[i]!=v[n-1-i]){
                return false;
            }
        }
        return true;
    }
};