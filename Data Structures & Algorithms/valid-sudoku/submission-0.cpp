class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rowseen[9][9]={false};
        bool colseen[9][9]={false};
        bool boxseen[9][9]={false};
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.') continue;
                int num=board[r][c]-'1';
                int box=(r/3)*3+(c/3);
                if(rowseen[r][num]||colseen[c][num]||boxseen[box][num]){
                    return false;
                }rowseen[r][num]=true;
                colseen[c][num]=true;
                boxseen[box][num]=true;
            }
        }return true;
    }
};
