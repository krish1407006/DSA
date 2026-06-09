// function in cpp


#include<iostream>
using namespace std;

// void greet() {
//     cout << "Hello, World!" << endl;
// }

// int main() {
//     greet(); // calling the function
//     return 0;
// }




    int sum(int a, int b ) {
        cout << "Sum: " << a + b << endl;
        return a + b;


    }
    int main() {
        cout << "Enter two numbers: ";
        int a, b;
        cin >> a >> b;
        sum(a, b);
        return 0;
    }
