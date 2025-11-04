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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            for(int i=0;i<s;i++){
            TreeNode*CurrNode=q.front();
            q.pop();
            if(CurrNode->left!=NULL){
                q.push(CurrNode->left);
            }
             if(CurrNode->right!=NULL){
                q.push(CurrNode->right);
            }
            v.push_back(CurrNode->val);
        }
        ans.push_back(v);
    }
        return ans;
    }
};