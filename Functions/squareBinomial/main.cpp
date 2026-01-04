#include <iostream>
using namespace std;

int quadratic(int a, int b){
    return (a*a) + (2*a*b) + (b*b);
}

int main(){

    cout << quadratic(2,2);

    return 0;
}