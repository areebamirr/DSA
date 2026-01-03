#include <iostream>
using namespace std;

int main(){
    
    int n;
    int i = 1;
    cout << "Enter a number : ";
    cin >> n;

    while (i <= 10)
    {
        cout << n << "x" << i << "=" << n*i << endl;
        i++;
    }
       
    
    return 0;
}