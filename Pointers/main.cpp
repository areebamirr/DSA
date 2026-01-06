#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int * ptr = &a; // if do int* ptr OR int * ptr OR int *ptr , it does not matter. Compiler would not show any error.

    float pi = 3.14;
    float *ptr2 = &pi;

    cout << &pi << "=" << ptr2 << endl;
    cout << &a << " = " << ptr << endl;

    cout << *(ptr) << endl; // Deferencing the ptr's value

    int *ptr3 = NULL;  // This is null pointer since it has not assigned with the address of any variable. Compiler would generate the random address.
    cout << ptr3 << endl;
    cout << *ptr3 << endl; // This will result in error(show nothing) due to dereferencing a null pointer is not possible.

    return 0;
}