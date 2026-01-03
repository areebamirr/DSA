#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ch = 65;

    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= n; j += i){
            cout << (char)(ch+j);
        }
        cout << endl;
    }
    return 0;
}