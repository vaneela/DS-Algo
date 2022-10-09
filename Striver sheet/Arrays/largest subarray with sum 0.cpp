int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        int mx=0;
        long long sum =0;
        unordered_map<long long ,int>mp;
        for(int i=0; i<n; i++){
            sum += (long long)arr[i];
           if(sum ==0)
           mx = i+1;
           else{ auto it= mp.find(sum);
            if(it == mp.end())
            mp[sum]= i;
            else{
                int len = i-mp[sum];
                mx = max(mx, len);
            }}
        }
        return mx;
    }