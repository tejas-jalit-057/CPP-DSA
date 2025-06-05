#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> find_intersection(int a[], int b[], int n, int m)
{
    vector<int> ans;
    int i = 0;
    int j = 0;

    while (i < n && j < m){
        if(a[i] < b[j]) i++;
        else if( a[i] > b[j]) j++;
        else {
            ans.push_back(a[i]);
            i++;
            j++;
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