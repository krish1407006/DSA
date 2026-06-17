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
for (int i = 0; i < size; i++) {
if (nums[i] < smallest) {
    smallest = nums[i];

}
}
cout << "Smallest number so far: " << smallest << endl;
    return 0;

}