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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> store;
        
        while(list1 != NULL){
            store.push_back(list1->val);
            list1 = list1->next;
        }

         while(list2 != NULL){
            store.push_back(list2->val);
            list2 = list2->next;
        }

        sort(store.begin(), store.end());
        if(store.size()==0) return NULL;
        ListNode* head = new ListNode(store[0]);
        ListNode* prev = head;

        for(int i =1; i<store.size(); i++){
            ListNode* temp = new ListNode(store[i]);
            prev->next= temp;
            prev = temp;
        }

        return head;
    }
};