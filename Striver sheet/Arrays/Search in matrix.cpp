class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int s =0, e = m*n -1;
        while(s <= e){
            int mid = s+ (e-s)/2;
            int i= mid / m;
            int j = mid % m;
            if(matrix[i][j] == target)
                return 1;
            else if(matrix[i][j] < target)
                s = mid+1;
            else 
                e = mid-1;
        }
        return 0;
    }
};


// GFG
int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int i =0, j = M-1;
	    while( i < N  && j >-1){
	        if(mat[i][j] == X)
	        return 1;
	        else if(mat[i][j] > X)
	        j--;
	        else 
	        i++;
	    }
	    return 0;
	}