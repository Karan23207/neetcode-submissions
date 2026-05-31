class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int,int>> q;
        int fresh=0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2)
                    q.push({i, j});
                else if(grid[i][j] == 1)
                fresh++;    
            }
        }

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        int min =0;
        while(!q.empty() && fresh > 0){

            int sz =q.size();
            min++;

            while(sz--){
                auto [r, c] = q.front();
                q.pop();
                
                for(int i = 0; i < 4; i++){
                    int nr = r + drow[i];
                    int nc = c + dcol[i];

                    if(nr >= 0 && nr < m && nc >= 0 && nc < n &&
                       grid[nr][nc] == 1){
                        grid[nr][nc] = 2;
                        fresh --;
                    q.push({nr, nc});
                    }
                }
            }
        }
        
        if(fresh == 0) return min;
        else return -1;
    }
};
