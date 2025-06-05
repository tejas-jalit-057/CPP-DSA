#include <iostream>
using namespace std;

int i = 1;
void printName(int n)
{
    if (i > n)
        return; // ---- this is the base condition

    cout << i << " = -- Tejas --" << endl;
    i++;
    printName(n);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    printName(n);

    return 0;
}