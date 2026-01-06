#include <iostream>
using namespace std;

int main(){
    
    int marks[5] = {7,5,2,3,1};

    for (int idx = 0; idx < sizeof(marks)/sizeof(int); idx++){
        cout << marks[idx] << " ";
    }
    return 0;
}