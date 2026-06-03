#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >=90 ) {
        cout << "You have scored an A grade.";
    }
    else if (marks >=80 && marks <90) {
        cout << "You have scored a B grade.";
    }
    else if (marks >=70 && marks <80) {
        cout << "You have scored a C grade.";
    }
    else if (marks >=60 && marks <70) {
        cout << "You have scored a D grade.";
    }
    else {
        cout << "You have scored an F grade.";
    }
}
