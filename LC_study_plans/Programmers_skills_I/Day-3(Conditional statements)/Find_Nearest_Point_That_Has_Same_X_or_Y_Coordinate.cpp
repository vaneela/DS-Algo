class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=-1;
        int mindist=INT_MAX;
        int dist=0;
        for(int i=0;i<points.size();i++){
            int x1=points[i][0];
            int y1=points[i][1];
            if(x==x1 || y== y1){
                dist=abs(x-x1) + abs(y-y1);
                if(dist<mindist){
                    mindist=dist;
                    ans=i;
                }
            }
        }
        return ans;
    }
};