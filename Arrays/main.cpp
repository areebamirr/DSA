#include <iostream>
using namespace std;

int main(){

    int marks[50] = {1,2,3};
    cout << marks[0] << endl; 
    cout << marks[0] << endl;

    cout << sizeof(marks)<< endl; // 50 integers * 4 bytes per integer = 200 bytes so sizeof would return total bytes of an array.
    // To get the size of array i.e. 50, we do this
    cout << sizeof(marks)/ sizeof(int); //Print the length of array

    return 0;
}