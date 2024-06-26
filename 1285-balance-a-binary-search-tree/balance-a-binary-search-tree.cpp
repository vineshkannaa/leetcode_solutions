class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> sortedValues;
        inorderTraversal(root, sortedValues);

        return buildBalancedBST(sortedValues, 0, sortedValues.size() - 1);
    }

private:
    void inorderTraversal(TreeNode* node, vector<int>& values) {
        if (!node) return;
        inorderTraversal(node->left, values);
        values.push_back(node->val);
        inorderTraversal(node->right, values);
    }

    TreeNode* buildBalancedBST(const vector<int>& values, int start, int end) {
        if (start > end) return nullptr;
        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(values[mid]);
        root->left = buildBalancedBST(values, start, mid - 1);
        root->right = buildBalancedBST(values, mid + 1, end);
        return root;
    }
};
