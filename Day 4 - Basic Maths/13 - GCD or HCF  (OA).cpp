#include<bits/stdc++.h>
using namespace std;

// Enter the Two Numbers : 20 40
// The GCD of the Numbers are : 20 

int gcd_of_num(int n1, int n2){

    while (n1 > 0 && n2 > 0){
        if (n1 > n2){n1 = n1 % n2;}
        else{n2 = n2 % n1;}    
    }
    if (n1 == 0) cout <<  n2;
    return n1;
}

int main() {
    int n1, n2;
    cout << "Enter the Two Numbers : ";
    cin >> n1;
    cin >> n2;

    int GCD = gcd_of_num(n1, n2);
    cout << "The GCD of the Numbers are : " << GCD << " ";

    return 0;
}