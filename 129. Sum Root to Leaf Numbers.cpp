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
    void generate(TreeNode* node, int prev, int& sum) {
        if(node) {
            prev = (prev * 10) + node->val;
            if(node->left == nullptr and node->right == nullptr)
                sum += prev;
        generate(node->left, prev, sum);
        generate(node->right, prev, sum);
        }
    }

public:
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        int nums = 0;
        generate(root, nums, sum);
        return sum;
        }
};
