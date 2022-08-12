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
class Solution
{
public:
    long long int maxdata(TreeNode *root)
    {
        if (root == NULL)
            return -1e10;
        long long int rdata = root->val;
        return max(rdata, max(maxdata(root->left), maxdata(root->right)));
    }
    long long int mindata(TreeNode *root)
    {
        if (root == NULL)
            return 1e10;
        long long int rdata = root->val;
        return min(rdata, min(mindata(root->left), mindata(root->right)));
    }
    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
            return 1;
        if (root->left == NULL && root->right == NULL)
            return 1;
        long long int mind = mindata(root->right);
        long long int maxd = maxdata(root->left);
        if (maxd >= root->val || mind <= root->val)
            return 0;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};