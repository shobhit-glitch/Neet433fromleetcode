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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(0);
        ListNode* ptr=temp;
        
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int num1=(l1 !=nullptr) ? l1->val : 0;
            int num2=(l2!=nullptr) ? l2->val : 0;
            int sum=num1+num2+carry;
            int dig;
            dig=sum%10;
            carry=sum/10;
            ListNode* newNode=new ListNode(dig);
            ptr->next=newNode;
            ptr=ptr->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;

        }
        ListNode* res=temp->next;
        delete temp;
        return res;
    }
};