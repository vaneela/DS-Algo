#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
        vector<vector<int>> ans;
        for(int i=0;i<matrix[0].size();i++){
            vector<int>temp;
            for(int j=0;j<matrix.size();j++){
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int>>matrix;
    for(int i=0;i<r;i++){
        vector<int>temp(c);
        for(int j=0;j<c;j++){
            cin >> temp[j];
        }
        matrix.push_back(temp);
    }
    vector<vector<int>> ans = transpose(matrix);
    

    return 0;
}