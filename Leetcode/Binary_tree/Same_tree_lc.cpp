class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return 1;
        if(p==NULL || q==NULL)
            return 0;
        bool f1;
        if(p->val == q->val)
            f1= 1;
        else
            return 0;
        bool f =isSameTree(p->right,q->right);
        bool n = isSameTree(p->left, q->left);
        return (f&& n);
        
        
    }
};