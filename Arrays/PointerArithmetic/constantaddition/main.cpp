#include <iostream>
using namespace std;

int main(){

    // Addition and Subtraction of Constant

    int x = 10;
    int * ptr = &x;

    cout << ptr << endl;

    ptr += 3;
    cout << ptr << endl;

    cout << ptr - 3 << endl;  // ptr -3 or ptr -= 3 means same!

    return 0;
}