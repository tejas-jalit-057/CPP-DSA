#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int dup = n;
    int revnum = 0;

    while ( n > 0){
        int ld = n % 10;                  // same as reverse
        revnum = revnum * 10 + ld;
        n = n / 10;
    }
    

    if(dup == revnum) cout << "True";     // check if  ---(duplicate == reverse)
    else cout << "False";
    return 0;
}