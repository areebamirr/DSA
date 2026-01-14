#include <iostream>
#include <climits>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int arr[], int n){
    int freq[100000];
    int minVal= INT_MAX, maxVal = INT_MIN;
    for(int i =0; i<n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = min(maxVal, arr[i]);
    }
    // TC: O(n)
    for(int i =0; i<n;i++){
        freq[arr[i]]++;
    }
    // TC: O(range)
    for(int i=minVal, j = 0; i<maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr,n);
}

int main(){

    int arr[5] = {1,4,3,5,6};

    countSort(arr,5);


    return 0;
}