// question link-->https://leetcode.com/problems/search-a-2d-matrix-ii/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows=matrix.size();
        int col=matrix[0].size();

        int rowIndex=0;
        int colIndex=col-1;


        while(rowIndex < rows && colIndex>=0){

            int element=matrix[rowIndex][colIndex];

            if(element==target){
                return 1;
            }
            if(element<target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
        
    }
};