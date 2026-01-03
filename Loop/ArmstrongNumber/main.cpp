#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    int sum = 0;

    cout << "Enter a number : ";
    cin >> n;

    int temp = n;

    while (n>0)
    {
        int lastDigit = n % 10;
        sum += lastDigit*lastDigit*lastDigit;
        n /= 10;
    }

    if(sum == temp){
        cout << temp << " is Armstrong Number" << endl;
    }else{
        cout << temp << " is not Armstrong Number" << endl;

    }

    return 0;
}