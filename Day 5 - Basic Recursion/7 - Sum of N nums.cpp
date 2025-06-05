#include <iostream>
using namespace std;

int main() {// -------using Loops
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout <<"The sum of N numbers are : " << sum;
    return 0;
}