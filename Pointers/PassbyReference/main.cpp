#include <iostream>
using namespace std;

void changeA(int *ptr){
    *ptr = 10;
    cout << *ptr << endl;
}

int main(){

    int a = 20;
    changeA(&a); 
    cout << a << endl;

    return 0;
}