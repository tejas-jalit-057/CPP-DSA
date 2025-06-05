#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    
    int sum = 0;
    int temp = n;
    int count = 0;

    // first extract the numbers 
    while ( temp > 0){
        temp /= 10;
        count ++;
    }
    // find the number of digits
    cout << "number of digits : " << count << endl;

    temp = n;
    // to calculate the sum 
    while(temp > 0){
        int digit = temp % 10;
        sum = sum + static_cast<int>(pow(digit, count));
        temp /= 10;
    }

    if (sum == n)
        cout << "True";
    else
        cout << "False";

    return 0;
}