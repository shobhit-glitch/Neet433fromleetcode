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
        //**********[ FAST AND SLOW POINTER METHOD ]**********
        // ListNode *f=head;
        // ListNode *s=head;
        // if(f==NULL || f->next==NULL){
        //     return false;
        // }
        // while(f && f->next!=NULL){
        //     f=f->next->next;
        //     s=s->next;
        //     if(f==s){
        //         return true;
        //     }
        // }
        // return false;
        //************[ SET METHOD ]*************
        ListNode *temp=head;
        unordered_set<ListNode*> vnode;
        while(temp!=NULL){
            if(vnode.find(temp)!=vnode.end()){
                return true;
            }
            vnode.insert(temp);
            temp=temp->next;
        }
        return false;
    }
};