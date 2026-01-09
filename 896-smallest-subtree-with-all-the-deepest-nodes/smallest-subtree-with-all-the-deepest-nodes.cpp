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
    TreeNode* ans = 0;
    int maxDepth = INT_MIN;
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
    int dfs(TreeNode* root, int depth){
        maxDepth = max(maxDepth, depth);
        if(root == nullptr){
            return depth;
        }
        int ld = dfs(root->left, depth+1);
        int rd = dfs(root->right, depth+1);
        if(ld == maxDepth && rd == maxDepth){
            ans = root;
        }
        return max(ld,rd);
    }
};