#include<iostream>
using namespace std;

int main() {

//     int arr[5];

//     int marks [5] = { 90, 80, 70, 60, 50 };
//    cout << "Size of marks array: " << sizeof(marks) << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << marks[i] << " ";
//     }
//     cout << sizeof(marks) << endl;



int nums[] = { 10, 20, -15, -40, 50 };

int size = 5;

int smallest = INT_MAX;
int largest = INT_MIN;
for (int i = 0; i < size; i++) {

        largest = max(nums[i], largest);
        smallest = min(nums[i], smallest);
}

cout << "Smallest number so far: " << smallest << endl;
cout << "Largest number so far: " << largest << endl;
    return 0;

}