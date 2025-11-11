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
    void reorderList(ListNode* head) {

        vector<int> store;
        ListNode* temp = head;
        while(temp){
            store.push_back(temp->val);
            temp = temp->next;
        }
        
        int store_size = store.size();
        //if(store.size()==0) return;
        
         temp = head;

        int i =0, j= store_size -1;
        int flag =0;

        while(i<=j)
        {
            if(flag %2 ==0){
                temp->val = store[i];
                i++;
            }
            else{
                temp->val = store[j];
                j--;
            }
            flag ++;
            temp = temp->next;
          
        }
        
        
    }
};