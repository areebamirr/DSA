#include <iostream>
using namespace std;

int isPrime(int num){
        if (num == 1){
        return false;
    }
    int factor_count = 0;
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            factor_count++;
        }        
    }
    if (factor_count > 2){
        return false;
    }
    else if (factor_count = 2){
        return true;
    }
}

int primeGenerator(int num){
    for (int i = 1; i <= num; i++){
        if (isPrime(i) == true){
            cout << i << endl;
        }
    }
}

int main(){

    primeGenerator(10);
    return 0;
}