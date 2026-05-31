class Solution {
public:

int solve(vector<vector<int>> &visit, vector<vector<int>>& grid, int row, int col){
    visit[row][col] =1;
    int m = grid.size();
    int n = grid[0].size();

    queue< pair<int, int> > q;
    q.push({row,col});
    int area =1;

    while( !q.empty() ){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        for(int i =0; i<4; i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                if( nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                    !visit[nrow][ncol] && grid[nrow][ncol] == 1 ){
                    visit[nrow][ncol] = 1;
                    q.push( {nrow,ncol} );
                    area ++;
                 }
            }
        }
        return area;
}

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> visit(m , vector<int>(n,0));
        int islandcnt =0;
        int maxi = 0;
        for(int row=0; row<m; row++){
            for(int col=0; col<n; col++){
                if( !visit[row][col] && grid[row][col] == 1 ){
                    int area =solve(visit, grid, row, col);
                    
                    maxi = max(maxi , area);
                }
            }
        }
        return maxi;
    }
};
