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
private:
    void sumOfLLeaves(TreeNode* leaf, int& sum){
        if(leaf != nullptr) {
        sumOfLLeaves(leaf->left, sum);
        if(leaf->left != NULL && (leaf->left->left == NULL && leaf->left->right == NULL)){
            sum += leaf->left->val;
        }
        sumOfLLeaves(leaf->right, sum);
        }
    }

public:
    int sumOfLeftLeaves(TreeNode* root){
        int sum = 0;
        sumOfLLeaves(root, sum);
        return sum;
    }
};
