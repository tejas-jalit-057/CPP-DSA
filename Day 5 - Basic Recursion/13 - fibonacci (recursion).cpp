#include <bits/stdc++.h>
using namespace std;

// Enter the Number : 4
// The fibonacci sequence is : 3

int fibonacci(int n){
    if(n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << "The fibonacci sequence is : "<< fibonacci(n);
    return 0;
}
