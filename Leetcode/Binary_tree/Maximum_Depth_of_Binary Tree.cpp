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
    int maxDepth(TreeNode* root) {
        int maxx =0;
        if(root==NULL)
            return 0;
        int r = maxDepth(root->right);
        int l = maxDepth(root->left);
        maxx = max(r,l);
        return maxx +1;
    }
};

// using bfs

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        return 0;
        int ans =0;
        queue<TreeNode *> q;
        q.push(root);
        while(q.size()){
            ++ans;
            int n = q.size();
            for(int i=0; i<n ; i++){
                TreeNode*cur = q.front();
                q.pop();
                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);

            }
        }
        return ans;   
    }
};