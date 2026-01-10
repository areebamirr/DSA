#include <iostream>
using namespace std;

int main(){
    
    int x = 10;
    cout << &x << endl;
    
    int *ptr = &x; 
    cout << ptr << endl;

    ptr++;

    cout << ptr << endl;

    return 0;
}