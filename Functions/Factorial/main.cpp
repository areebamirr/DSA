#include <iostream>
using namespace std;

int factorial(int num){
    int product = 1;
    for (int i = 1; i <= num; i++){
        product *= i;
    }
    return product;
}

int main(){

    cout << factorial(4);
    return 0;
}