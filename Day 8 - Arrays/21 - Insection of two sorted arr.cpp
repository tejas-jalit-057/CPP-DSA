#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> find_intersection(int a[], int b[], int n, int m){
    vector<int> ans;
    int vis[m] = {0};

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i] == b[j] && vis[j] == 0){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if (b[j] > a[i]) break;
        }
    }
    return ans;
}

int main()
{
    int a[] = {1, 1, 2, 3, 4, 5};
    int b[] = {2, 3, 4, 4, 5, 6};

    int n = 6;
    int m = 6;

    vector<int> r = find_intersection(a, b, n, m);
    for (int num : r)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}