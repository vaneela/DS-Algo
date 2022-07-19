class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char ,int>mp;
        int cnt =0;
        for(int i=0; i< s1.size();i++){
            if(s1[i]!=s2[i])
                cnt++;
        }
        if(cnt>2)
            return 0;
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
            mp[s2[i]]--;
        }
        for(auto i: mp){
            if(i.second>0)
                return 0;
        }
        return 1;
    }
};