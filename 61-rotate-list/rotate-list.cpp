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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0){
            return head;
        }
        ListNode* first=head;
        int cnt=1;
        while(first->next!=NULL){
            cnt++;
            first=first->next;

        }
        k=k%cnt;
        ListNode* sec=head;
        if(k==0){
            return head;
        }
        int i=0;
        int j=cnt-k-1;
        while(i<j){
            sec=sec->next;
            i++;

        }
        first->next=head;
        head=sec->next;
        sec->next=NULL;
        return head;

        
    }
};