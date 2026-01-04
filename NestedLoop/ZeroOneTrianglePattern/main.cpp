#include <iostream>
using namespace std;

int main(){

    bool val = true;
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 0; i <= 5; i++){
        for (int j = 0; j <= i; j++){
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }

    return 0;
}