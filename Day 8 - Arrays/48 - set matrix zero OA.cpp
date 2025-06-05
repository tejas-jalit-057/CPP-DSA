#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    // int row[n] = {0}; --> matrix[..][0]
    // int col[m] = {0}; --> matrix[0][..]


    // marking is done here for 1st row & col only..
    int col0 = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0; // --> mark row
                
                if(j != 0){matrix[0][j] = 0;} // --> mark col
                else col0 = 0;
            }
        }
    }

    // marking is done here except (1st row & col) ..
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] != 0){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    // special case for   ==>  matrix[0][0] <==   only...  
    if (col0 == 0){
        for (int i = 0; i < n; i++){
            matrix[i][0] = 0;
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
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}