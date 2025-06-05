#include <iostream>
using namespace std;

// Enter a Number : 5
// The Fact of N numbers are : 120

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

    int main()
    {
        int n;
        cout << "Enter a Number : ";
        cin >> n;

        int print = factorial(n);
        cout << "The Fact of N numbers are : " << print;
        return 0;
}