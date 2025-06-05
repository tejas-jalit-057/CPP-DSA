#include <iostream>
using namespace std;

// Enter a Number : 3
// The sum of N numbers are : 6

int sum(int n){
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    
    cout <<"The sum of N numbers are : " << sum(n);
    return 0;
}