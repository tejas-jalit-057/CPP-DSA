#include <iostream>
using namespace std;

// Enter a Number : 5
// The Fact of N numbers are : 120

int main() {
    int n;
        cout << "Enter a Number : ";
        cin >> n;

        int fact = 1;
        for (int i = 1; i <= n; i++){
            fact = fact * i;
        }
        cout << "The Fact of N numbers are : " << fact;

        return 0;
}