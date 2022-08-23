class Solution {
    
public:
    int board[11][11];

bool safe(int r, int n, int col){
    // same col
    for(int i = r-1; i>=0; i--){
        if(board[i][col]==1)
            return 0;
    }
    // left digonal
    for(int i=r-1,j = col -1; i>=0 && j >= 0; i--,j--){
        if(board[i][j]==1)
            return 0;
    }
    // right digonal
    for(int i = r-1,j = col+1; i>=0 && j<n ; i--, j++){
        if(board[i][j]==1)
            return 0;
    }
    return 1;
}
void nqueen(int n,int r, vector<vector<string>>& ans){
    
    if(r==n){
        vector<string>v;
        for(int i=0 ;i <n; i++){
            string temp="";
            for(int j=0; j< n;j++){
                if(board[i][j])
                    temp+='Q';
                else
                    temp+='.';
        
            }
            v.push_back(temp);
            
        }
        ans.push_back(v);
   	return;
    }
    
        for(int j=0;j<n;j++){
            if(safe(r,n,j)){
                board[r][j]=1;
                nqueen(n,r+1, ans);
                board[r][j]=0;
            }
        }
    return;
    
}

    vector<vector<string>> solveNQueens(int n) {
        memset(board,0,11*11*sizeof(int));
        vector<vector<string>>ans;
        nqueen(n,0,ans);
        return ans;
        
    }
};