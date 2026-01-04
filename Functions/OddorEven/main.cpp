#include <iostream>
using namespace std;

void parsity(int num){
    if (num % 2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

}

int main(){ 

    parsity(2);
    return 0;
}