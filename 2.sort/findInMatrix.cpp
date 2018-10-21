bool findX(vector<vector<int> > mat, int n, int m, int x)
{
    int row = 0;
    int col = m-1;
    while(row < n && col >= 0)
    {
        if(mat[row][col] < x)
        {
            row++;
        }
        else if(mat[row][col] > x)
        {
            col--;
        }
        else 
            return true;
    }
    return false;
}