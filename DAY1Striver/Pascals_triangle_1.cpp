class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows);
        for(int i=0;i<numRows;i++){
          
            for(int j=0;j<i+1;j++){
                if(j==0||j==i)
                triangle[i].push_back(1);
                else{
                triangle[i].push_back(triangle[i-1][j]+triangle[i-1][j-1]);
                }
            }
        }
        return triangle;
    }
};