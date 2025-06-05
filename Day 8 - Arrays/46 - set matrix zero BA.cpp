#include <bits/stdc++.h>
using namespace std;

void mark_row(vector<vector<int>> &matrix, int m, int i){
    for (int j = 0; j < m; j++){
        if (matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}

void mark_col(vector<vector<int>> &matrix, int n, int j)
{
    for (int i = 0; i < n; i++){
        if (matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == 0){
                mark_row(matrix, m, i);
                mark_col(matrix, n, j);
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();

    cout << "The Given matrix is: \n";
    for (auto it : matrix)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }

    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: \n";
    for (auto it : ans){
        for (auto ele : it){
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
