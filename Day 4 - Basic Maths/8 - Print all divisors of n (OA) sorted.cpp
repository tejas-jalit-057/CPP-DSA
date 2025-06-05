#include <bits/stdc++.h>
using namespace std;
 
// Enter the Number :36
// Divisors of 36 are : 
// 1 2 3 4 6 9 12 18 36 

void printDivisors(int n){
    vector<int> divisors;

//                                           // same as the last code.
    for (int i = 1;  i*i <= n; i++){
        if(n%i == 0){
            divisors.push_back(i);

            if(n/i != i){
                divisors.push_back(n/i);
            }
        }
    }
    cout << endl;
    sort(divisors.begin(), divisors.end());  //  code for sorting the vector
    for (auto it :divisors)                  // iterating the vector using loop
        cout << it << " ";
}

int main() {
    int n;
    cout << "Enter the Number :";
    cin >> n;

    cout << "Divisors of " << n << " are : ";
    printDivisors(n);

    return 0;
}