//https://leetcode.com/problems/invert-binary-tree/

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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL || (root -> left == NULL && root -> right == NULL))
            return root;
        TreeNode * temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;
        root -> left = invertTree(root -> left);
        root -> right = invertTree(root -> right);
        return root;
    }
};
