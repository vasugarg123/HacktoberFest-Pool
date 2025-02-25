/*
Given the root of a binary tree and two integers val and depth, add a row of nodes with value val at the given depth depth.

Note that the root node is at depth 1.

The adding rule is:

Given the integer depth, for each not null tree node cur at the depth depth - 1, create two tree nodes with value val as cur's left subtree root and right subtree root.
cur's original left subtree should be the left subtree of the new left subtree root.
cur's original right subtree should be the right subtree of the new right subtree root.
If depth == 1 that means there is no depth depth - 1 at all, then create a tree node with value val as the new root of the whole original tree, and the original tree is the new root's left subtree.
*/

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) {
            TreeNode* dummy = new TreeNode(val);
            dummy->left = root;
            return dummy;
        }
        return fun(root, val, depth - 1);
    }
    TreeNode *fun(TreeNode *root, int val, int depth) {
        if(!root) return nullptr;
        if(depth == 1) {
            TreeNode *d1 = new TreeNode(val);
            TreeNode *d2 = new TreeNode(val);
            
            d1->left = fun(root->left, val, depth - 1);
            d2->right = fun(root->right, val, depth - 1);
            
            root->left = d1, root->right = d2;
            
            return root;
        }
        root->left = fun(root->left, val, depth - 1);
        root->right = fun(root->right, val, depth - 1);
        return root;
    }
};
