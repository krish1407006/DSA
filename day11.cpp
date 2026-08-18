

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   
    // vector<int> vec (5, 0);

    

    vector<char> vec = {'a','b','c','d'};

    cout <<"size :" << vec.size() << endl;
    vec.push_back(2);
    cout<<"after push" << vec.size() << endl;

    vec.pop_back();

    for (char val: vec) {
        cout<< val << endl;
    }

    return 0;
}