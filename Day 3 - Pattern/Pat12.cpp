#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        // for star
        for (int j = n; j <= 0; j--) {
            cout << "* ";
        }
        // for space
        for (int j = 1; j <= n; j++) {
            cout << "  ";
        }
        // for star
        for (int j = 1; j <= n-i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}