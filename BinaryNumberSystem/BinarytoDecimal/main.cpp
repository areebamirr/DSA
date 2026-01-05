#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout << "Enter a Binary Number : ";
    cin >> n;

    int decNum = 0;
    int pow = 1;

    while (n > 0){
        int lastDig = n % 10;
        decNum += lastDig * pow;
        pow = pow*2;
        n = n/10;
    }
    
    cout << decNum;

    return 0;
}