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

    void traversal ( vector<int> &storeInOrder,TreeNode* root){
        if(!root) return;
        traversal (storeInOrder, root->left);
        storeInOrder.push_back(root->val);
        traversal (storeInOrder, root->right);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> storeInOrder;
        traversal (storeInOrder, root);
        //vector<int> sorted = sort(storeInOrder.begin(), storeInOrder.end()); sort function return void
        vector<int> sorted = storeInOrder;
        //sort(storeInOrder.begin(), storeInOrder.end());
      
        for(int i =0; i<sorted.size()-1; i++){
           if(sorted [i]>=sorted[i+1]) return false;
        }
        return true;
    }
};