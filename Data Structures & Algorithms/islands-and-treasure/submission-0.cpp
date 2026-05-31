class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int INF = 2147483647 ;
        queue<pair<int,int>> q;
        
        for(int row=0; row<m; row++){
            for(int col =0; col<n; col++){
                if(grid[row][col] == 0)
                q.push({row,col});
            }
        }

        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};

        while( !q.empty() ){
            auto [r,c] = q.front();
            q.pop();

            for(int i=0; i<4; i++){
                int delrow = r  + delr[i];
                int delcol = c + delc[i];

                if( delrow>=0 && delrow<m && delcol >= 0 && delcol<n &&
                    grid[delrow][delcol] == INF ){
                    grid[delrow][delcol] = grid[r][c] + 1;
                    q.push({delrow,delcol});
                }
            }
        }
        
    }
};
