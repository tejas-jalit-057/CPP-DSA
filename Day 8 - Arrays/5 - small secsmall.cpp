#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int small = arr[0];
    for (int i = 0; i < n;i++){
        if(arr[i]< small){
            small = arr[i];
        }
    }
    cout << "small element : " << small << endl;

    int secsmall = INT_MAX;
    for (int i = 0; i < n;i++){
        if (arr[i] < secsmall && arr[i] != small){
            secsmall = arr[i];
        }
    }
    cout << "second small element : " << secsmall;
    return 0;
}