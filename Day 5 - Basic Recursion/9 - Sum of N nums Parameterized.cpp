#include <iostream>
using namespace std;

// Enter a Number : 3
// The sum of N numbers are : 6
int sum = 0;
int print_sum(int n){
    if (n <= 0){
        return 0;
    }
    return n + print_sum(n - 1);
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int sum = print_sum(n);
    cout << "The sum of N numbers are : " << sum;
    return 0;
}