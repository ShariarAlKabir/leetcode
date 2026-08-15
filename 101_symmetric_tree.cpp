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
    bool symmetry(TreeNode* l,TreeNode* r){
        if(l==nullptr&&r==nullptr) return true;
        if(l!=nullptr&&r==nullptr ||l==nullptr&&r!=nullptr) return false;
        if(l->val!=r->val) return false;
        return symmetry(l->left,r->right) && symmetry(l->right,r->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return symmetry(root->left,root->right);
    }
};
