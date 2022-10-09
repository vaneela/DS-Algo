class Solution {
    int solve(int m,int i, int n, int j,vector<vector<int>>&mat){
         if( i== m-1 && j == n-1){
             mat[i][j]=1;
        return 1;
        }
        else if(i >=m || j >= n)
            return 0;
        int ans =0;
        if(mat[i][j] != -1)
        return mat[i][j];
        ans+= solve(m,i+1,n,j,mat);
        ans+=solve(m,i,n,j+1,mat);
        mat[i][j]=ans;
        return ans;
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>mat;
        for(int i=0; i<m ;i++){
                vector<int>temp;
                for(int j=0; j<n; j++)
                    temp.push_back(-1);
                mat.push_back(temp);
        }
        return solve(m,0,n,0,mat);
    }
};