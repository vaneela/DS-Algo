class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int>mp;
        for(auto ch: s)
            mp[ch]++;
        char ans;
        for(int i=0;i<t.size();i++){
            auto it = mp.find(t[i]);
            if(it==mp.end()){
               ans=t[i];
                
            }
             else if(it->second >0){
                mp[t[i]]--;
             }
            else if(it->second==0){
                ans=t[i];
                break;
            }
  
               }      
               
            return ans;   
               
        }
};