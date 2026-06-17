#include<iostream>
using namespace std;

// int main() {

//     int arr[5];

//     int marks [5] = { 90, 80, 70, 60, 50 };
//    cout << "Size of marks array: " << sizeof(marks) << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << marks[i] << " ";
//     }
//     cout << sizeof(marks) << endl;



// int nums[] = { 10, 20, -15, -40, 50 };

// int size = 5;

// int smallest = INT_MAX;
// int largest = INT_MIN;
// for (int i = 0; i < size; i++) {

//         largest = max(nums[i], largest);
//         smallest = min(nums[i], smallest);
// }

// cout << "Smallest number so far: " << smallest << endl;
// cout << "Largest number so far: " << largest << endl;
//     return 0;

void changearr(int arr[], int size) {
    cout << "in function: ";
    for (int i = 0; i < size; i++) {
        arr[i] += 2* arr[i];
    }
}

int main() {
    int arr[] = {1 , 2 , 3 , 4 , 5};
    changearr(arr, 3);
    cout << "\n in main : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
 
        return 0;
}