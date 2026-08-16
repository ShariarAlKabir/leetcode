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
    int mind(TreeNode* root){
        if(root->left==nullptr && root->right==nullptr) return 1;
        if(root->left==nullptr) return mind(root->right)+1;
        if(root->right==nullptr) return mind(root->left)+1;
        if(root->left!=nullptr && root->right!=nullptr){
            return min(mind(root->left),mind(root->right))+1;
        }
        return 99999;
    }
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        else return mind(root);
    }
};
