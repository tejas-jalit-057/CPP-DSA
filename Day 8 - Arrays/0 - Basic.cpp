#include <iostream>
#include <climits>

using namespace std;

int main() {
    int marks[] = {99, 100, 50, 60, 75};
    int size = sizeof(marks)/ sizeof(marks[0]);

    for (int i = 0; i < size; i++){
        cout << marks[i] << " ";
    }
    cout << marks[0] << endl ;
    cout << marks[1] << endl ;
    cout << marks[2] << endl ;
    cout << marks[3] << endl ;
    cout << marks[4] << endl ;




    int arr[10] = {};
    int sizeofarr = 10 ;

    for (int i = 0; i < sizeofarr; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < sizeofarr; i++){
        cout << arr[i] << endl;
    }

}