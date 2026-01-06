#include <iostream>
using namespace std;

int main(){
    // Program to output the largest value of integer in the array.
    // By traversing/iterating through an array, compare it with the max value, if it is greater then assign it with arr[i].

    int arr[5] = {3,6,2,7,8};
    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];

    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}