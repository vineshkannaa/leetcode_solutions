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
    bool isValidBST(TreeNode* root) {
        vector<int> vals;
        inorderTraversal(root, vals);
        for (int i = 0; i < vals.size() - 1; i++) {
            if (vals[i] >= vals[i + 1]) return false;
        }
        return true;
    }
    void inorderTraversal(TreeNode* node, vector<int>& values) {
        if (!node) return;
        inorderTraversal(node->left, values);
        values.push_back(node->val);
        inorderTraversal(node->right, values);
    }
};