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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* h=head;
        int l=0;//length of the linked list
        while(h!=NULL)
        {
            l=l+1;
            h=h->next;
        }
        h=head;
        if(l==0)
            return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nextnode;
        if(left==1 && right==l)
        {
            while(curr!=NULL)
            {
                nextnode=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextnode;
            }
            return prev;
        }
        if(left>1)
        {
        int i=1;
        ListNode* k=NULL;
        while(i<left)
        {
            k=curr;
            curr=curr->next;
            i++;
        }
        k->next=NULL;
        while(i<=right && curr!=NULL)
        {
            nextnode=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextnode;
            i++;
        }
        k->next=prev;
        while(prev->next!=NULL)
            prev=prev->next;
        prev->next=nextnode;
        return head;
        }
        if(left==1 && right>left)
        {
            int i=1;
            while(curr!=NULL && i<=right)
            {
                nextnode=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextnode;
                i++;
            }
            head=prev;
            while(prev->next!=NULL)
                prev=prev->next;
            prev->next=nextnode;
        }
        return head;
    }
};
