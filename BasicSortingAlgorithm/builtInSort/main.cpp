#include <iostream>
#include <algorithm>
using namespace std;
// Time Complexity is O(nlogn)

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[8] = {1,2,5,4,3,6,4,7};
    sort(arr, arr+8);

    print(arr,8);

    int arr1[5] = {4,3,1,5,3};  //Sort it in descending order
    sort(arr1, arr1+5, greater<int>());
    print(arr1, 5);

    return 0;
}