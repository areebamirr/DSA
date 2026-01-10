#include <iostream>
using namespace std;

// time complexity for printing subarray is O(n^3)

void printSubarrays(int * arr, int n){
    for (int start = 0; start < n; start++){  //n times
        for (int end = start; end<n; end++){  //n times
            for(int i = start; i<=end;i++){   //n times
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main(){

    // Print subarray of the array
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    printSubarrays(arr, n);
    return 0;
}