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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* trav=head;
        ListNode* trav1=head;
        int cnt=0;
        while(trav!=nullptr){
            cnt++;
            trav=trav->next;
            
        }
        int num=cnt-n;
        if (num == 0) {
            ListNode* temp = head;
            head = head->next;  
            delete temp;  
            return head;
        }
        
        for(int i=0;i<num-1;i++){
            trav1=trav1->next;
        }

        ListNode* del=trav1->next;
        
        trav1->next=del->next;

        return head;
        

    }
};