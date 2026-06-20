#include<iostream>
using namespace std;

// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             return i; 
//         }
//     }
//     return -1;
// }
// int main () {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;
//    cout << "Enter the element to search: ";
//     int target;
//     cin >> target;
//     int result = linearSearch(arr, size, target);
//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found" << endl;
//     }
//     return 0;
// }


int main () {

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

