#include<iostream>
using namespace std;

int main () {
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // while (num<10) {
    //     cout << num << " ";
    //     num++;
// }

//do while loop

// int n = 10;
// int i = 1;
//   do {
//     cout << i << ' ';
//     i++;
//   }
//   while 
//       (i<=n);
//   cout << endl;
//   return 0;
  
int num = 7;
bool isPrime = true;

 
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    
        if (isPrime == true) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }
    }
}
