// Spiral Order Matrix
// Step-1: Row Start  from a value which is stored in row_start variable
// step-2: Column start from a value which is stored in column_start variable
// Step-Row_start and column_start value is incremented by +1
// we repeat step 1 after that step 2 again again
// the loop for above is continiued till row_start <=row_end and column start <= row_end
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        // printing first row
        // Here we had fixed row_start elemnent and varing column to column_end
        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // Now we are moving top to bottom
        // For this we had fixed column_end elemnent and varing row from top to bottom
        for (int row = row_start; row <= row_end; row++)
            cout << arr[row][column_end] << " ";
        // Now we are decrementing column
        column_end--;

        // Here we are moving towards right to left and decrementing as well
        // Here the row is fixed and we are varing the column
        for (int col = column_end; col >= column_start; col--)
            cout << arr[row_end][col] << " ";
        row_end--;

        // here we are moving from bottom to top
        // Here the column is fixed initially and then row is decreasing one by one
        // After that we are  decrementing the column
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }
        column_start++;
    }
    return 0;
}