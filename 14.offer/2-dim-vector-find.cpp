#include <iostream>
#include <vector>

using namespace std;

bool find(int target, vector<vector<int> > array)
{
    bool found = false;
    int row_length = array.size();
    int column_length = array[0].size();

    int row, column;
    for (row = 0, column = column_length-1; row <row_length && column>=0;)
    {
        if (array[row][column] == target)
        {
            found = true;
            break;
        }
        else if(array[row][column] > target)
        {
            cout << array[row][column] << endl;
            column--;
            continue;
        }
        else 
        {
            cout << array[row][column] << endl;
            row ++;
            continue;
        }
    }
    return found;
}

int main()
{
    int r,c;
    cin >> r >> c;
    vector<vector<int> > matrix(r, vector<int>(c,0));
    for (int i=0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    bool found = find(5, matrix);
    cout << found << endl;
}