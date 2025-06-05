#include <bits/stdc++.h>
using namespace std;

// Enter the Number :36
// 1 2 3 4 6 9 12 18 36

void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Number :";
    cin >> n;

    printDivisors(n);

    return 0;
}