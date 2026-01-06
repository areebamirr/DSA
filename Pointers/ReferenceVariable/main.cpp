#include <iostream>
using namespace std;

int main(){
    // Reference variable
    int a = 10;
    int &b = a;
    b = 25;
    cout << b << endl;
    cout << a << endl;
   


    return 0;
}