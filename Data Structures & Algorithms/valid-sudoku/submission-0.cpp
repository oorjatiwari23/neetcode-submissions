class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            unordered_set<char> s;
            for(int j=0;j<9;j++)
            {
            
            char c=board[i][j];
            if(c=='.')
            continue;
            if(s.count(c))
            return false;
            s.insert(c);
            }
            
        }

        for(int i=0;i<9;i++)
        {
            unordered_set<char> cset;
            for(int j=0;j<9;j++)
            {
            
            char c=board[j][i];
            if(c=='.')
            continue;
            if(cset.count(c))
            return false;
            cset.insert(c);
            }
            
        }


        for(int i=0;i<9;i=i+3)
        {

            for(int j=0;j<9;j=j+3)
            {
                unordered_set<char> box;
                for(int x=i;x<i+3;x++)
                {
                    for(int y=j;y<j+3;y++)
                    {
                    
                    char d=board[x][y];
                    if(d=='.')
                    continue;
                    if(box.count(d))
                    return false;
                    box.insert(d);
                    }
                }
            }
        }
        return true;

    }
};
