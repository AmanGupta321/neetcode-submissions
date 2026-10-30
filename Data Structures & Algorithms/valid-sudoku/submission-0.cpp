class Solution {
public:
    bool boardTraverse(vector<vector<char>>& board, int startRow, int endRow, int startCol, int endCol){
        unordered_set<int> st;
        for(int i=startRow; i<=endRow; i++){
            for(int j=startCol; j<=endCol; j++){
                if(board[i][j] == '.') continue;
                else if(st.find(board[i][j]) != st.end())
                    return false;

                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            unordered_set<int> st;
            for(int j=0; j<9; j++){
                if(board[i][j] == '.') continue;
                else if(st.find(board[i][j]) != st.end()) return false;
                st.insert(board[i][j]);
            }
        }

        for(int i=0; i<9; i++){
            unordered_set<int> st;
            for(int j=0; j<9; j++){
                if (board[j][i] == '.') continue;
                else if(st.find(board[j][i]) != st.end()) return false;
                st.insert(board[j][i]);
            }
        }

        for(int sr=0; sr<9; sr+=3){
            int er = sr + 2;
            for(int sc=0; sc<9; sc+=3){
                int ec = sc + 2;
                if(!boardTraverse(board, sr, er, sc, ec))
                    return false;
            }
        }
        return true;
    }
};
