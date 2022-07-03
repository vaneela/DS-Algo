class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        bool ans=0;
        for(auto c :s){
            if(c=='[' || c=='(' || c=='{'){
                st.push(c);
            
            ans=1;}
            else{
                if(st.empty()){
                    ans=0;
                    break;
                }else{
                    switch(c){
                        case '}':
                            
                            if(st.top()=='{'){
                                st.pop();
                            }else{
                                ans=0;
                            }
                            break;
                        case ']':
                            if(st.top()=='[')
                                st.pop();
                            else
                                ans=0;
                            break;
                        case ')':
                            if(st.top()=='(')
                                st.pop();
                            else
                                ans=0;
                    }
                }
                    
            }
        }
        if(st.empty()){
            ans=ans;
        }else
            ans=0;

        return ans;
    }
};