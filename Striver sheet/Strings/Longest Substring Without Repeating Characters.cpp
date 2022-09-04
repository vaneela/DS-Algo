class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() ==0)
            return 0;
        unordered_set<char>st;
        int l=0,r=0,len=INT_MIN;
        while(l < s.size() && r < s.size()){
            if(st.find(s[r])== st.end()){
                st.insert(s[r]);
                len = max(len,r-l+1);
                r++;
            }else{
                do{
                    if(st.find(s[r])==st.end()){
                        st.insert(s[r++]);
                        break;
                    }
                    st.erase(s[l]);
                    l++;
                    
                    
                }while(1);
            }
            len = max(len,r-l);

        }
        return len;
    }
    
};