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
    TreeNode* solve(vector<int>&preorder,int s, int e){
        if(s > e || s==-1 || e==-1)
        return NULL;
        else if(s==e){
            TreeNode*root= new TreeNode(preorder[s]);
            return root;
        }
        int rdata = preorder[s];
        int left_preS = s+1;
        int right_preS =-1;
        int left_preE = -1;
        int right_preE = e;
        for(int i= s; i<=e ;i++){
            if(preorder[i] > rdata){
                right_preS = i;
                break;
            }
        }
        if(right_preS ==-1)
            left_preE = e;
        else
            left_preE = right_preS-1;
        cout << s << " "<< e<<endl;
        TreeNode*root=new TreeNode(rdata);
        root->left=solve(preorder,left_preS, left_preE);
        root->right= solve(preorder,right_preS,right_preE);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* ans = solve(preorder,0,preorder.size()-1);   
        return ans; 
    }
};