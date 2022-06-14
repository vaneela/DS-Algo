#include<bits/stdc++.h>
#define ll long long
using namespace std;
string isPar(string &str){
    stack<char>st;
    for(auto &c : str){
        if(c == '{' || c == '(' || c == '['){
            st.push(c);

        }
        else{
            if(st.empty()){
                return "NO";
            }
            else{
                switch (c)
                {
                case ']':
                    if(st.top()=='[')
                        st.pop();
                    else
                        return "NO";
                    break;
                case ')':
                if(st.top()=='(')
                    st.pop();
                else
                    return "NO";
                    break;
                default:
                    if(st.top()!='{')
                       return "NO";
                    st.pop();

                }
            }
        }
    }
    if(!st.empty()){
        return "NO";

    }
    return "YES";
}
int main(){
    string str ;
    cin >> str;
    cout << isPar(str);
    return 0;
}