/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> qt;
        vector<vector<int>> ans;
        if (!root)
            return ans;
        int flag = 0;
        qt.push(root);
        while (!qt.empty()) {
            vector<int> sub;
            int size = qt.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = qt.front();
                qt.pop();
                if (node->left)
                    qt.push(node->left);
                if (node->right)
                    qt.push(node->right);
                sub.push_back(node->val);
            }
            if (flag) {
                reverse(sub.begin(), sub.end());
                flag = 0;
            } else
                flag = 1;
            ans.push_back(sub);
        }
        return ans;
    }
};