class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int inc=0, dec=0;
        int incInd=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                inc=1;
                incInd=i+1;
            }else
                break;
        }
        for(int i=incInd;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                dec=1;
            }else{
                dec=0;
                break;
            }
        }
        
        return inc && dec;
    }
};