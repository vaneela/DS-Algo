class Solution {
    bool solve(unordered_map<char,int>mp,string str){
        bool ans =0;
        for(int i=0;i<str.size();i++){
            mp[str[i]]--;
            int f=mp[str[i]];
            for(auto ele : mp){
                if(f==0 )
                    f=ele.second;
                else{
                    if(ele.second !=0 && f!=ele.second){
                        ans =0;
                        break;
                    }else
                        ans =1;
                }
            }
            mp[str[i]]++;
            if(ans)
                return ans;
        }
        return ans;
    }
public:
    bool equalFrequency(string word) {
        unordered_map<char,int>mp;
        for(char c : word)
            ++mp[c];
        bool ans = solve(mp,word);
        return ans;
    }
};