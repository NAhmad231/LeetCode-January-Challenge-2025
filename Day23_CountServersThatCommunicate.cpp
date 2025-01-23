class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int>v1(n,0);
        vector<int>v2(m,0);
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j] == 1){
                    v1[i]++;
                    v2[j]++;
                }
            }
        }
        int result = 0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j] == 1){
                    if(v1[i] > 1 || v2[j] > 1){
                        result++;
                    }
                }
            }
        }
        return result;
    }
};