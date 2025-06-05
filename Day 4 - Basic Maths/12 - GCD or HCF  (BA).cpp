#include<bits/stdc++.h>
using namespace std;

// Enter the Two Numbers : 20 40
// The GCD of the Numbers are : 20 

int gcd_of_num(int n1, int n2){


    // Check if i is a common of n1 & n2
    for (int i = min(n1, n2); i > 0; i--){
        if (n1 % i == 0 && n2 % i == 0){
            return i; // if i is common factor
        }
    }
    return 1; 
    // If no common factors are found,
    // return 1 (as 1 is always a
    // divisor of any number)
}

int main() {
    int n1, n2;
    cout << "Enter the Two Numbers : ";
    cin >> n1;
    cin >> n2;

    cout << "The GCD of the Numbers are : " << gcd_of_num(n1, n2) << " ";

    return 0;
}