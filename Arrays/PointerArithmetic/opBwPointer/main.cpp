#include <iostream>
using namespace std;


int main(){

    int x = 10;
    int y = 20;

    int *ptr1 = &x;
    int *ptr2 = &y;

    cout << ptr1 - ptr2 << endl;  
    // This means that how many bytes are there to store any variable between the address of ptr1 and ptr2. 

    int arr[20] = {1,2,3,4,5};
    int *ptr3 = arr;
    int *ptr4 = ptr3 + 3;

    cout << ptr4 - ptr3;

    return 0;
}