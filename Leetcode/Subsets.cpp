void subs(vector<int>&arr,vector<int>op,int i, vector<vector<int>>&ans){
        //base case
        if(i>=arr.size()){
            ans.push_back(op);
            return;
        }
        // exclude cll
        subs(arr,op,i+1,ans);
        
        //include cll
        op.push_back(arr[i]);
        subs(arr,op,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>op;
        subs(nums,op,0,ans);
        return ans;
    }