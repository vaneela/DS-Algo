    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> m;
        string upr="qwertyuiop", mid="asdfghjkl", lwr = "zxcvbnm";
        for(char c: upr){
            m[c]=1;
            m[toupper(c)]=1;
        }
        for(char c: mid){
            m[c]=2;
            m[toupper(c)]=2;
        }
        for(char c: lwr){
            m[c]=3;
            m[toupper(c)]=3;
        }
        vector<string>ans;
        for(auto s : words){
            bool flag = 1;
            for(int i=0;i< s.size()-1;i++){
                if(m[s[i]] !=m[s[i+1]]){
                    flag = 0;
                    break;
                }
            }
            if(flag)
                ans.push_back(s);
        }
        return ans;
    }