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

    ListNode* rev(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL; 
        while(temp != NULL){ 
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;  
            temp = front; 
        }
        return prev;
    }
    ListNode* getKth(ListNode* temp,int k){
        k-=1;
        while(temp && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp ){
            ListNode* kth=getKth(temp,k);
            if(kth==NULL){
                if(prev){
                    prev->next=temp;
                }
                break;
            }
            ListNode* nxtn=kth->next;
            kth->next=NULL;
            rev(temp);
            if(head==temp){
                head=kth;
            }
            else{
                prev->next=kth;
            }
            prev=temp;
            temp=nxtn;
            

        }
        return head;
        
    }
};