#include <iostream>
using namespace std;

// Enter the Number : 5
// The Number is Prime

// Enter the Number : 36
// The Number is NOT Prime

// Enter the Number : 47
// The Number is  Prime


int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int count = 0;
    for (int i = 1; i<= n; i++){ // ----by using Simple  approach
        if(n % i==0){
            count++;
        }
    }

    if(count == 2)
        cout << "The Number is  Prime";
    else
        cout << "The Number is NOT Prime";

            return 0;
}