// question Link-->https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i<j)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }

        // reverse each row 


        for(int i=0;i<row;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }

        
    }
};