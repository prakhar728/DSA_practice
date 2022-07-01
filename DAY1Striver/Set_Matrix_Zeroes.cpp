#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    int  rows = matrix.size(), column = matrix[0].size();
    bool col = true;
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col = false;
        for (int j = 1; j < column; j++)
            if (matrix[i][j] == 0)
               { 
                matrix[i][0] = 0;
               matrix[0][j] = 0;
               }
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = column - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (!col)
            matrix[i][0] = 0;
    }
}