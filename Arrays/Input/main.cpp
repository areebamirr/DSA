#include <iostream>
using namespace std;

int main(){

    int arr[5];
    int n = sizeof(arr)/sizeof(int);

    // Inputting the value into array through command line interference

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}