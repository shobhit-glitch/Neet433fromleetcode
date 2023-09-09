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
    void reorderList(ListNode* head) {
        vector<int>v;
        ListNode*temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;

        }
        int i=0;
        
        int cnt=0;
        int l=v.size()-1;
        ListNode* MIAKHALIFA=head;
        while(MIAKHALIFA){
            if(cnt%2==0){
                MIAKHALIFA->val=v[i];
                i++;
            }else{
                MIAKHALIFA->val=v[l];
                l--;
            }
            cnt++;
            MIAKHALIFA=MIAKHALIFA->next;
        }
    }
};