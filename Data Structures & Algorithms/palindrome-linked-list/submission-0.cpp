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
        ListNode* s=head;
        ListNode* f=head;
        ListNode* prev=nullptr;
        while(f&&f->next){
            s=s->next;
            f=f->next->next;
        }ListNode* curr=s;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }ListNode* first=head,*sec=prev;
        while(sec){
            if(first->val!=sec->val) return false;
            first=first->next;
            sec=sec->next;
        }return true;
    }
};