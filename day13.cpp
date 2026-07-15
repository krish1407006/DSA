#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // for(int st=0; st<n; st++){
    //     for(int end=st; end<n; end++) {
    //         for(int i=st; i<=end; i++){
    //             cout<<arr[i];
        //     }
        //     cout<< " ";
        // }
        //     cout<<endl;
        
    // }

    int maxsum = INT_MIN;
    for(int st=0; st<n; st++) {
        int currentsum = 0;
        for(int end=st; end<n; end++) {
            currentsum = currentsum + arr[end];
            if(currentsum > maxsum) {
                maxsum = currentsum;
            }
          
            cout<<maxsum<<" ";
            cout<<endl;
        }
    }


    
}