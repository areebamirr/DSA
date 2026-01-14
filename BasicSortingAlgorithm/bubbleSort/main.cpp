#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int bubbleSort(int *arr){
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); 
            }
        }
    }
    print(arr, n);
}

int main(){

    int arr[4] = {1,2,2,5};
    
    bubbleSort(arr);

    return 0;
}