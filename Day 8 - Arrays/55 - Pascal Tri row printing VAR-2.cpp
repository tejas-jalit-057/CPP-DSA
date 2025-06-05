#include <bits/stdc++.h>
using namespace std;

void pascalTriangle(int n){
    long long res = 1;
    cout << res << " ";

    for (int i = 1; i < n; i++){
        res = res * (n - i);
        res = res / i;
        cout << res << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    pascalTriangle(n);
    return 0;
}
