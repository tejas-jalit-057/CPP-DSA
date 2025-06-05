#include <bits/stdc++.h>

using namespace std;

vector<int> printSpiral(vector<vector<int>> mat)
{
    vector<int> ans;
    int n = mat.size();
    int m = mat[0].size();

    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    while (left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
        }
        bottom--;

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(mat[i][left]);
            }
        }
        left++;
    }
    return ans;
}

int main()
{

    // Matrix initialization.
    vector<vector<int>> mat{{1, 2, 3, 4},
                            {12, 13, 14, 5},
                            {11, 16, 15, 6},
                            {10, 9, 8, 7}};

    vector<int> ans = printSpiral(mat);
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] <<  "  ";
    }

    cout << endl;

    return 0;
}