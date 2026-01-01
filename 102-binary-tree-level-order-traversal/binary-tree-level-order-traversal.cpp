/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

         queue<TreeNode*> q;
         vector<vector<int>> ans;
         if(root == NULL) return ans;

         q.push(root);
         
        
         while(q.size()){
            int n = q.size();
            vector<int> temp;
          while(n){
            TreeNode* present = q.front();
            if(present->left) q.push(present->left);
            if(present->right) q.push(present->right);
            
           // int curr = present->val;
            temp.push_back(present->val);
            q.pop();
            n--;

         }
         ans.push_back(temp);
        }

         return ans;

    }
};