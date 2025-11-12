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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {   //not reading questions properly
       //keep array ->>fill linkedlist with array value by skippking n, and last element pointing to NULL
        //if(n == 1) return NULL; 
        ListNode* temp = head;
        vector<int> store;
        while(temp){
            store.push_back(temp->val);
            temp = temp ->next;
        }

        int targeted_element = store.size()-n;
        temp = head;
        ListNode* prev = head;
        int flag = -1;

        if(targeted_element == 0){
            head = head->next;
            return head;
        }
       
        while(temp){
             flag ++;
             if(flag == targeted_element){
                prev->next = temp->next;
                temp = temp->next;
             }
             else{
             prev = temp;
             temp = temp ->next;
             }
        }

        return head;
        
    }
};