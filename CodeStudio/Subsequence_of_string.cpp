void solve(string str,string temp, int i, vector<string>&ans){
    if(i>=str.size()){
        if(!temp.empty())
            ans.push_back(temp);
        return;
    }
    // ex cll
    solve(str,temp,i+1,ans);
    // in cll
    temp+=str[i];
    solve(str,temp,i+1,ans);
    
}
vector<string> subsequences(string str){
	string temp="";
    vector<string>ans;
    solve(str,temp,0,ans);
    return ans;
	// Write your code here
	
}
