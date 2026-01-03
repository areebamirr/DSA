#include <iostream>
using namespace std;

int main(){
    //      1
    //     212
    //    32123
    //   4321234
    int num;
    cout << "Enter a number : ";
    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = num; j >= i; j--){
            cout << "  ";
        }
        for (int j = i; j >= 1; j--){
            cout <<" " << j;
        }
        for (int j = 2; j <= i; j++){
            cout <<" " << j;
        }
        cout << endl;
    }

    return 0;
}