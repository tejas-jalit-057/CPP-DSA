#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int revnum = 0;

    while(n > 0){
    int ld = n % 10;
    revnum = revnum * 10 + ld;
    n = n / 10;
    }
    cout << revnum;
    return 0;
}