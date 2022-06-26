int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>m1,m2;
        for(auto i:words1)
            m1[i]++;
        for(auto i:words2)
            m2[i]++;
        int count =0;
        for(auto i:m1){
            if(i.second ==1){
                auto it = m2.find(i.first);
                if(it!=m2.end()){
                    if(it->second ==1)
                        count++;
                }
            }
        }
        return count;
    }