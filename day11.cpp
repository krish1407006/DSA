

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> vec (5, 0);

    vector<char> vec = {'a','b','c','d'};

    for (char val: vec) {
        cout<< val << endl;
    }
    return 0;
}