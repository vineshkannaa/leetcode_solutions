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
    /*bool isSameTree(TreeNode* p, TreeNode* q) {
        bool final=true;
        while(final==true && p->right!=nullptr && p->left!=nullptr&& q->right!=nullptr&& q->left!=nullptr){
            if(p->val==q->val && p->right=nullptr && q->right=nullptr){
                p = p->
            }else if(p->val==q->val){
                
            }else final=false;
        }
        return final;
    }*/

    bool isSameTree(TreeNode* p, TreeNode* q) {
        //Base Case
        if(!p && !q) return true;

        //Recursive case
        if(p && q && p->val == q->val){
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};