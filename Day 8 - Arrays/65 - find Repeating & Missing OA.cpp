

#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    int n = a.size();
    long long sn = n * (n + 1) / 2;
    long long s2n = n * (n + 1) * (2 * n + 1) / 6;
    long long s = 0;
    long long s2 = 0;
    for (int i = 0; i < n; i++){
        s += a[i];
        s2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = sn - s;
    long long val2 = s2n - s2;
    val2 = val2 / val1;

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}


int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}
