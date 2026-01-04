#include <iostream>
using namespace std;

bool prime(int num){
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

int main(){

    cout << (bool)prime(1); // output should be zero or False

    return 0;
}