#include <bits/stdc++.h>
using namespace std;
 
// Enter the Number :36
// Divisors of 36 are : 1 36 2 18 3 12 4 9 6 

void printDivisors(int n){
    for (int i = 1;  i*i <= n; i++){
        if(n%i == 0){
            cout << i << " ";
            if(n/i != i){   // (36 % 6 != 6) then this case won't run 
                cout << n / i << " ";
                // here we can't print directly the (n/i)
                // because, the last value (i.e., 6)
                // will print 2 times...
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << "Divisors of " << n << " are : ";
    printDivisors(n);

    return 0;
}