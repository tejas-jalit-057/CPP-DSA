
#include <bits/stdc++.h>

using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // transposing the matrix
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){  // --> here (i+1) is used to avoid swapping of matrix[a][a]... 
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reversing the row then
    for (int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Given aray Image" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
