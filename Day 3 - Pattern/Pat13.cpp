#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int count = 0;
    for (int i = 0; i <= n; i++) 
    {
        // for star
        for (int j = 1; j <=n-i+1; j++) {
            cout << "* "; 
        }
        // for space
        for (int j = 0; j < count; j++) {
            cout << "  ";
        }
        // for star
        for (int j = 1; j <= n-i+1; j++) {
            cout << "* ";
        }
        count += 2;
        cout << endl;
    }

    return 0;
}