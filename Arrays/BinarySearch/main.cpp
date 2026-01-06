#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int st = 0;
    while(st <= n){
        int mid = (st+n)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            st = mid + 1;
        }
        else{
            n = mid -1;
        }
    }
}

int main(){
    // Binary Search: It must be sorted. And then we can find our target value.

    int arr[] = {1,2,3,5,6,9};
    cout << binarySearch(arr,6, 6);

    return 0;
}