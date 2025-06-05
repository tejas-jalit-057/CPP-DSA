#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int N)
{
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= N; i++){
        xor1 ^= i;
    }
    for (int i = 0; i < N-1; i++){
        xor2 ^= a[i];
    }
    return xor1 ^ xor2;
}

int main()
{
    vector<int> a = {1, 2, 4, 5};
    cout << "The missing number is: " << missingNumber(a, 5) << endl;
    return 0;
}
