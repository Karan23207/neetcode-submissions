class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        queue<pair<int,int>> q;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        // step-1 : push all O'S from border
        for(int i=0; i<m; i++){
            if(board[i][0] == 'O') q.push({i,0});
            if(board[i][n-1] == 'O') q.push({i,n-1}); 
        }
        for(int i=0; i<n; i++){
            if(board[0][i] == 'O') q.push({0,i});
            if(board[m-1][i] == 'O') q.push({m-1,i}); 
        }
          

        int drow[]= {-1,0,1,0};
        int dcol[]= {0,1,0,-1};

        while( !q.empty() ){
            auto [r,c] = q.front();
            q.pop();
            // if(board[r][c] != 'O') continue;
            board[r][c] = 'S'; // changing boarder state o to safe state s

            for(int i =0; i<4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if( nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                    board[nrow][ncol] == 'O' ){
                        q.push({nrow,ncol});
                    }
            }
    
        }

// converting safe state s to initial state 0 and all other state to x
        for(int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if(board[i][j] == 'S')
                board[i][j] = 'O';
                else 
                board[i][j] = 'X'; 
            }
        }
    }
};
