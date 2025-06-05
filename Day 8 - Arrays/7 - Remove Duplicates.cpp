#include <iostream>
#include<set>
using namespace std;

//  Remove duplicates from Sorted Array

// NOTE :- The set only store unique elements which
// is the property of a set.


void remove_duplicates(int arr[],int size){
    set<int> unique_elements;

    // First for loop (Inserting into set):
    for (int i = 0; i<size ; i++){
        unique_elements.insert(arr[i]);        
    }


    // Second for loop (Printing elements):
    cout << "After removing the duplicates : ";
    for (int elements : unique_elements){
        cout << elements<< " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = 7;

    remove_duplicates(arr, size);
    return 0;
}