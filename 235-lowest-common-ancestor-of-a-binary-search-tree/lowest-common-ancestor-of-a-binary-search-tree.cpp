/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

           if(!root) return NULL;
           int small = 0, large = 0;

           if(p->val < q->val) small = p->val;
           else small = q->val;

           if(p->val < q->val) large = q->val;
           else large = p->val;


           TreeNode* ans = NULL; 

           while(root){
               /* if(large <= root->val && small <= root->val) root = root->left;
                if(large >= root->val && small >= root->val) root = root->right;
                if(small <= root->val && large >= root->val) {
                    ans = root;
                     break;
                }*/

                if (large < root->val) {
                  root = root->left;
                    } 
                    else if (small > root->val) {
                        root = root->right;
                    } 
                    else {
                        return root; // LCA found
                    }
                        }

           return ans;
    }
};