#include<iostream>
using namespace std;

int main() {

    int arr[5];

    int marks [5] = { 90, 80, 70, 60, 50 };
    printf("Marks of students are: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    
    return 0;
}