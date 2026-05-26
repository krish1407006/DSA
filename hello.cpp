/*
==============================
    C++ Variables, Data Types, and Operators
==============================

1. Variables:
     - Variables are containers for storing data values.
     - Syntax: <data_type> <variable_name> = <value>;
     - Example: int age = 25;

2. Data Types:
     - Fundamental types in C++ include:
         * int      : Integer numbers (e.g., 1, -5)
         * float    : Floating-point numbers (e.g., 3.14)
         * double   : Double-precision floating-point numbers
         * char     : Single characters (e.g., 'A')
         * bool     : Boolean values (true or false)
         * string   : Sequence of characters (requires #include <string>)

3. Operators:
     - Arithmetic Operators: +, -, *, /, %
         * Example: a + b, a - b, a * b, a / b, a % b
     - Assignment Operators: =, +=, -=, *=, /=, %=
         * Example: x = 5; x += 2; // x becomes 7
     - Comparison Operators: ==, !=, <, >, <=, >=
         * Example: a == b, a != b, a < b
     - Logical Operators: && (AND), || (OR), ! (NOT)
         * Example: (a > 0 && b > 0), !(a == b)

*/


#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;


    float Pi = 3.14;
    cout << "Pi: " << Pi << endl;

    bool student = true;
    cout << "Is student: " << student << endl; // true is represented as 1 in C++ and
    // false is represented as 0

    double largeNumber = 123456789.12345;
    cout << "Large Number: " << largeNumber << endl;
    

    int a , b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;


    



    cout << "Hello, World!" << endl;
    return 0;
}

 


// hello

// This is a simple C++ program that prints "Hello, World!" to the console. It includes the iostream library for input and output operations and uses the standard namespace to avoid having to prefix standard library names with "std::". The main function is the entry point of the program, and it returns 0 to indicate that the program finished successfully.