#include<iostream>
using namespace std;

int main() {

    int arr[5];

    int marks [5] = { 90, 80, 70, 60, 50 };
   cout << "Size of marks array: " << sizeof(marks) << endl;
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << sizeof(marks) << endl;

    return 0;
}