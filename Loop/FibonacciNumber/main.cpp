#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number : " ;
    cin >> n;

    int first = 0;
    int second = 1;

    cout << first << endl << second << endl;
    for(int i = 2; i <= (n-1); i++){
        int third = first + second;
        cout << third << endl;
        first = second;
        second = third;
    }
    cout << "\n";

    return 0;
}