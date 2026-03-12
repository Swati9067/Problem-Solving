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
    ListNode *detectCycle(ListNode *head)
    {
        if(head==0) return head;
       
    //    unordered_map<ListNode *,int> mp;
    //     while(head)
    //     {
    //         mp[head]++;
    //         // for(auto it:mp)
    //         // {
    //         //     if(it.second>1) return head;
    //         // }
    //         if(mp[head]>1) return head;

    //         head=head->next;
            
    //     }

    //     return NULL;
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(fast==slow)
            {
                slow=head;

                while(slow!=fast)
                 {slow=slow->next;
                fast=fast->next;}
                return slow;
            }

        }

        return NULL;
    }
};