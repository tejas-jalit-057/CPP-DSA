#include <iostream>
using namespace std;

// Enter the number of rows: 6
// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i > n)stars = 2 * n - i;
            // for stars
        for (int j = 1; j <= stars; j++)
        {
            cout  << "* " ;
        }
        cout << endl;   
    }


    return 0;
}  