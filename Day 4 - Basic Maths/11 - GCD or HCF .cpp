#include <bits/stdc++.h>
using namespace std;

// Enter the Two Numbers : 20 40
// The GCD of the Numbers are : 20 

int gcd_of_num(int n1, int n2){
    int gcd_val = 1;

    for (int i = 1; i <= min(n1, n2); i++){  //   (1)   iterate to min element (i.e., 20)
        if (n1 % i == 0 && n2 % i == 0){     //   (2)   check (40 / 1 == 0) & (20 / 1 == 0) 
            gcd_val = i;                     //   (3)   GCD ==  1 
        }
    }
    return gcd_val;
}

int main() {
    int n1, n2;
    cout << "Enter the Two Numbers : ";
    cin >> n1;
    cin >> n2;

    cout << "The GCD of the Numbers are : " << gcd_of_num(n1, n2) << " ";

    return 0;
}