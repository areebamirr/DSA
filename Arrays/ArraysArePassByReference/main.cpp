#include <iostream>
using namespace std;

void funcA(int arr[]){
    arr[0] = 200;
}

void funcB(int *ptr){
    ptr[1] = 23;
}

int main(){
    int arr[] = {1,2,3,4,5};

    funcA(arr); // Passing arr is eq. to passing the pointer

    cout << arr[0] << endl;

    funcB(arr);

    cout << arr[0] << endl; // Passing arr as a pointer
    cout << arr[1] << endl;

    // Passing arr in pointer or just passing arr result in passing by reference ALWAYS!
 
    return 0;
}