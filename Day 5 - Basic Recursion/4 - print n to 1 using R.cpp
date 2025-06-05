#include <iostream>
using namespace std;

// Enter the Number : 5
// 5
// 4
// 3
// 2
// 1
void printNums(int n)
{
    if(n <= 0)
        return;
    cout << n << endl;
    n--;
    printNums(n);
}
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    printNums(n);
    return 0;
}