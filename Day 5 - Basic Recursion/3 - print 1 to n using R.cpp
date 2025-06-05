#include <iostream>
using namespace std;

// Enter the Number : 5
// 1
// 2
// 3  ---------shortcut :- BC, PRINT, FUNCTn
// 4
// 5
int i =1;
void printNums(int n)
{
    if(i > n)     // writing the base condition
        return;

    cout << i << endl;  // printing statement
    i++;
    printNums(n);  // rewriting the function
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    printNums(n);

    return 0;
}