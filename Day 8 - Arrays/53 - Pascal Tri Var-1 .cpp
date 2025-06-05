
#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++){
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c){
    int ele = nCr(r - 1, c - 1);
    return ele;
}

int main(){
    int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "
         << element << "\n";
    return 0;
}
