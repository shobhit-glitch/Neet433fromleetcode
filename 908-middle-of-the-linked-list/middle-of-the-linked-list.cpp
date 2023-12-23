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
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt+=1;
            temp=temp->next;

        }
        cout<<cnt;
        int start;
        ListNode* temp1=head;
        if(cnt%2==0){
            start=(cnt/2)+1;
        }
        else{
            start=(cnt+1)/2;
        }
        while(start!=1){
            start-=1;
            temp1=temp1->next;
            
        }
        head=temp1;
        return temp1;
        
    }
};