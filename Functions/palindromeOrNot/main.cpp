#include <iostream>
using namespace std;

int reverse(int n){
    int res = 0;
    while(n>0){
        int lastDig = n % 10;
        res = res*10 + lastDig;
        n = n/10;
    }
    return res;
}

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num == reverse(num)){
        cout << true;
    }    
    else{
        cout << false;
    }
    return 0;
}