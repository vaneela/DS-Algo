// class Solution {
// public:
//     int index(vector<int>arr, int s, int e, int x){
//         while(s <= e){
//             int mid = s+(e-s)/2;
//             if(arr[mid] > x)
//                 e= mid-1;
//             else if(arr[mid] < x)
//                 s = mid+1;
//             else 
//                  return mid;
                
            
//         }
//         return -1;
//     }
    
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int mid = index(nums, 0, nums.size()-1, target);
//         vector<int>ans(2,-1);
//         int s=0,e=0;
//         if(mid==-1){
//             return ans;
//         }
//         for(int i=mid;i>-1;i--){
//             if(nums[i]==target)
//                 s=i;
//         }
//         for(int i=mid;i<nums.size();i++){
//             if(nums[i]==target)
//                 e=i;
//         }
//         ans[0]=s;
//         ans[1]=e;
//         return ans;

//     }
// };

class Solution {
public:
    int first(vector<int>arr, int s, int e, int x){
        int index = -1;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(arr[mid] > x)
                e= mid-1;
            else if(arr[mid] < x)
                s = mid+1;
            else {
                index = mid;
                e= mid-1;
            }
        }
        return index;
    }
    
    int last(vector<int>arr, int s, int e, int x){
        int index = -1;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(arr[mid] > x)
                e= mid-1;
            else if(arr[mid] < x)
                s = mid+1;
            else {
                index = mid;
                s= mid+1;
            }
        }
                return index;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = last(nums,0,nums.size()-1,target);
        int f = first(nums,0,nums.size()-1,target);
        vector<int>ans;
        ans.push_back(f);
        ans.push_back(l);
        return ans;

    }
};

#include<climits>
TreeNode<int>* largerst(TreeNode<int>* root, int l){

    TreeNode<int>* cur;
    TreeNode<int>* ans = NULL;
    if(root==NULL)
        return ans;
    
    ans = root;
    for(int i = 0;i<root->children.size();i++){
        cur = largerst(root->children[i],l);
        if(cur->data<l && cur->data > ans->data ){
            ans = cur;
        }
    }
    return ans;
    
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return NULL;
    
    TreeNode<int>* large = largerst(root,INT_MAX);
    TreeNode<int>* slarge = largerst(root,large->data);
    
    // TreeNode<int>* ans = NULL;
    
    return slarge;
}