vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int>ans;
        int n=nums1.size(),m=nums2.size();
        if(n<m){
            for(int i=0;i<n;i++){
                auto it = find(nums2.begin(),nums2.end(),nums1[i]);
                if(it != nums2.end()){
                    if(find(ans.begin(),ans.end(),nums1[i]) == ans.end())
                        ans.push_back(nums1[i]);
                }
            }
        }else{
            
            for(int i=0;i<m;i++){
                auto it = find(nums1.begin(),nums1.end(),nums2[i]);
                if(it != nums1.end()){
                    if(find(ans.begin(),ans.end(),nums2[i]) == ans.end())
                        ans.push_back(nums2[i]);
                }
            }
        }
        return ans;
    }