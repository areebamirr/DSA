#include <iostream>
using namespace std;


int converter(int num){
    long long binary_num = 0;
    int remainder, j = 1;

    while (num > 0){
        remainder = num % 2;
        num = num / 2;
        binary_num +=  remainder * num;
        num  *= 10;
    }
    return binary_num;
}

int main(){

    // for (int num = 1; num <= 5; num++){
    cout <<  converter(2) << endl;

    // }

    return 0;
}