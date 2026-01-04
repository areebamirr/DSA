#include <iostream>
using namespace std;

int factorial(int num){
    int product = 1;
    for (int i = 1; i <= num; i++){
        product *= i;
    }
    return product;
}

int combination(int n, int r){
    int denomenator = factorial(r)*factorial(n-r);
    return (factorial(n)/denomenator);
}

int main(){

    cout << combination(10,7);

    return 0;
}