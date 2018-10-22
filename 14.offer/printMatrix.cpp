#include <iostream>
#include <vector>
using namespace std;

vector<int> printMatrix(vector<vector <int> > matrix)
{
    vector<int> res;
    int row = matrix.size();
    int col = martrix[0].size();
    vector<int> result;

    if(row == 0 || col == 0) 
        return result;
    int top = 0, left = 0, right = col-1, bottom = row-1;

    while(top <= bottom && left <= right)
    {
        for(int i = left; i <= right; i++)
            result.push_back(matrix[top][i]);
        top++;
        for(int i = top; i<=bottom; i++)
            result.push_back(martrix[i][right]);
        right--;
        for(int i = right; i>= left; i--)
            result.push_back(matrix[bottom][i]);
        bottom--;
        for(int i = bottom; i>= top; i--)
            result.push_back(matrix[i][left])
        left++;
    }
    return result;
}