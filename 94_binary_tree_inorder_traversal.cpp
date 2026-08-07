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
    vector<int> sol;
    void printTree(TreeNode* root){
        if(root==nullptr) return;
        if(root->left!=nullptr) printTree(root->left);
        sol.push_back(root->val);
        if(root->right!=nullptr) printTree(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        printTree(root);
        return sol;
    }
};
