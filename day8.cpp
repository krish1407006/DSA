#include<iostream>
using namespace std;

int main() {
    //bitwise operators

    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    cout << "a & b: " << (a & b) << endl; // 0001 (1 in decimal)
    cout << "a | b: " << (a | b) << endl; //
    cout << "a ^ b: " << (a ^ b) << endl; // 0010 (2 in decimal)
    cout << "~a: " << (~a) << endl; // 1010 (
    cout << "a << 1: " << (a << 1) << endl; // 1010 (10 in decimal)
    cout << "a >> 1: " << (a >> 1) << endl; // 0010 (2 in decimal)

    return 0;

}