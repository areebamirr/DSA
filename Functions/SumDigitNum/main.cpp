#include <iostream>
using namespace std;

int sumDigit(int num){
    int sum = 0;
    while (num >= 1){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(){

    cout << sumDigit(12);

    return 0;
}