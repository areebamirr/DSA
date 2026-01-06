#include <iostream>
using namespace std;

// Time complexity for linear Search is O(n) which is linear 
int linearSearch(int arr[], int n, int key){

    for (int i = 0; i < n; i++){
        if(arr[i] == key){
            cout << "Got the value of " << key << " at index " << i << endl;
            break;
        }   
    }
    return -1;  // -1 means that not exist
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    linearSearch(arr, n, 10);

    return 0;
}