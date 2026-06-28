#include<iostream>
#include<vector> // Required for using std::vector
using namespace std;

int main () {
    // ===== Declaration and Initialization =====
    cout << "===== Vector Initialization =====" << endl;

    // 1. Default constructor: Creates an empty vector.
    vector<int> vec1;
    cout << "vec1 (empty) size: " << vec1.size() << endl;

    vector<int> vec2(5, 100); // 5 integers, all with the value 100.
    cout << "vec2 (filled with 100s): ";
    for (int val : vec2) {
        cout << val << " ";
    }
    cout << endl;

    // 3. Initializer list (C++11 and later): Creates a vector from a list of values.
    vector<string> vec3 = {"apple", "banana", "cherry"};
    cout << "vec3 (from initializer list): ";
    for (const string& fruit : vec3) {
        cout << fruit << " ";
    }
    cout << endl << endl;

    // ===== Modifying a Vector =====
    cout << "===== Modifying a Vector =====" << endl;

    // Add elements to the end
    vec3.push_back("date");
    vec3.push_back("elderberry");
    cout << "vec3 after push_back: ";
    for (const string& fruit : vec3) {
        cout << fruit << " ";
    }
    cout << endl;

    // Remove the last element
    vec3.pop_back();
    cout << "vec3 after pop_back: ";
    for (const string& fruit : vec3) {
        cout << fruit << " ";
    }
    cout << endl << endl;

    // ===== Accessing Elements =====
    cout << "===== Accessing Elements =====" << endl;
    if (!vec3.empty()) { // Check if the vector is not empty
        cout << "First element using []: " << vec3[0] << endl;
        cout << "Second element using .at(): " << vec3.at(1) << endl;
        cout << "Last element using .back(): " << vec3.back() << endl;
    }
    cout << endl;
    
    // ===== Size and Capacity =====
    cout << "===== Size and Capacity =====" << endl;
    cout << "Size of vec3: " << vec3.size() << endl; // Number of elements in the vector
    cout << "Capacity of vec3: " << vec3.capacity() << endl; // Storage space currently allocated

    return 0;
}