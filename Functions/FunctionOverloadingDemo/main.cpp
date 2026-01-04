#include <iostream>
using namespace std;

int sum (int a, int b){
    cout << (a+b) << endl;
    return a+b;
}

double sum(double a, double b){
    cout << (a+b) << endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout << a+b+c << endl;
    return a+b+c;
}

int main(){

    sum(2,3);
    sum(12,13);
    sum(1.5, 2.6);  // In this case compiler treat the floating number as integer due to datatype we set was integer. And its return value in integer. But since we have another function of same declaration but different datatype, compiler would call back based on the data type we input the value which is double sum().. This interchangin use of function call back based on correct datatype is known as function overloading.
    sum(23, 32,33);

    return 0;
}