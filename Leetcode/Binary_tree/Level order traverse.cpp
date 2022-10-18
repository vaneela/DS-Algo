class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
        return ans;
        vector<int>temp;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(q.size()){
            int s = q.size();
            for(int i=0; i<s ;i++){
                TreeNode* cur = q.front();
                q.pop();
                if(cur == NULL ){
                    ans.push_back(temp);
                    temp.clear();
                    continue;
                }else
                temp.push_back(cur->val);
                if(cur->left)
                q.push(cur->left);
                if(cur->right)
                q.push(cur->right);
            }
            if(q.empty())
            break;
            else
                q.push(nullptr);
        }
        return ans;    
    }
};
// recursive
class Solution {
    void solve(TreeNode* root, vector<vector<int>>&ans, int d){
        if(root == NULL)
            return;
        if(ans.size() == d)
            ans.push_back(vector<int>());
        ans[d].push_back(root->val);
        solve(root->left,ans,d+1);
        solve(root->right,ans,d+1);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        solve(root,ans,0);
        return ans;
    }
};