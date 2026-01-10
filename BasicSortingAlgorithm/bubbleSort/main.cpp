#include <iostream>
using namespace std;

int bubbleSort(int *arr){
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int arr[3] = {1,3,2};
    
    bubbleSort(arr);

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << endl;
    }

    return 0;
}