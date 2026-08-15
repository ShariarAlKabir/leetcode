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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int length=nums.size();
        if(length==0) return nullptr;
        int mid=length/2;
        TreeNode* root=new TreeNode(nums[mid]);
        vector<int> lv,rv;
        for(int i=0;i<length;i++){
            if(i<mid) lv.push_back(nums[i]);
            if(i>mid) rv.push_back(nums[i]);
        }
        root->left=sortedArrayToBST(lv);
        root->right=sortedArrayToBST(rv);
        return root;
    }
};
