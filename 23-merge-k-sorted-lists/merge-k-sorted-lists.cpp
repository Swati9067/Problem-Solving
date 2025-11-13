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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size()==0) return NULL;

        vector<int> store;
        for(int i =0; i<lists.size(); i++){
            while(lists[i]){
                store.push_back(lists[i]->val);
                lists[i] =  lists[i]->next;
            }
        }

        sort(store.begin(), store.end());
        if(store.size()==0) return NULL;

        ListNode* combine = new ListNode(store[0]);
        ListNode* prev = combine;
        int i =1;

        for(int i =1; i<store.size(); i++){
            ListNode* curr = new ListNode(store[i]);
            prev->next = curr;
            prev = curr;
        }
        
        //prev->next = NULL;

        return combine;

    }
};