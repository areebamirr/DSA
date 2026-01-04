#include <iostream>
using namespace std;

int largest(int a, int b, int c){
    if (a> b){
        if (a>c){
            cout << a;
        }
        else{
            cout << c;
        }
    }
    else if (a > c){
        if (a>b){
            cout << a;
        }
        else{
            cout << b;
        }
    }
    else if(b>c){
        if (b>a){
            cout << b;
        }
        else{
            cout << a;
        }
    } 
    else {
        if (c>a){
            cout << c;
        }
        else{
            cout << a;
        }
    }
}

int main(){

    int a, b, c;
    cout << "Enter a number : " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "The largest number of three numbers are ";
    largest(a,b,c);
    return 0;
}