#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
    int n = arr.size();
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i]; // xor of all array elements
    }
    return XOR;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}