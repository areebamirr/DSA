#include <iostream>
using namespace std;

int main(){
    
    int x = 10;
    int *ptr = &x;

    int y = 25;
    ptr = &y;
    cout << *ptr << endl;    

    // Here you see the address stored in ptr can be modifiable but if doing with array, it cannot be modifiable.

    int arr[5]; // This is array pointer. It has not yet initailize.
    cout << arr << endl; // It would result in showing address of array so it called array pointer or constant pointer

    arr = &y; // Here you can see error  that array pointer cannot modify its address when equating with the address of other variable.

    return 0;
}