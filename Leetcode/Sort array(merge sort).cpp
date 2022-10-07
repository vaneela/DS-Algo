class Solution {
    int merge(vector<int>&arr,int s, int e){
        vector<int>v1,v2;
        int inv=0;
        int mid = s+(e-s)/2;
        for(int i=s;i<=  mid;i++){
            v1.push_back(arr[i]);
        }
        for(int i=mid+1;i<=e;i++)
            v2.push_back(arr[i]);
        int i=0,j=0,cur=s;
        while(i < v1.size() && j < v2.size()){
            if(v1[i] <= v2[j])
            arr[cur++]=v1[i++];
            else{
            arr[cur++]=v2[j++];
            inv += (v1.size()-i);
            }
        }
        while(i< v1.size())
            arr[cur++]=v1[i++];
        while(j < v2.size())
            arr[cur++] = v2[j++];
            return inv;
    }
    int mergesort(vector<int>&arr,int s,int e){
        int inv=0;
        if(s >= e)
        
        return inv;
        int mid = s +(e-s)/2;
        inv += mergesort(arr,s,mid);
        inv += mergesort(arr,mid+1,e);
        inv += merge(arr,s,e);
        return inv;
    }
public:
    vector<int> sortArray(vector<int>& nums) {
      int inv=  mergesort(nums,0,nums.size()-1);
    cout << inv << endl;
        return nums;
    }
};