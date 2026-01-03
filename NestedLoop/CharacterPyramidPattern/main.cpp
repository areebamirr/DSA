#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ch = 65;
    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << (char)(ch);
            ch++;
        }
        cout << endl;
    }

    return 0;
}