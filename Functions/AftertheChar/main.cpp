#include <iostream>
using namespace std;


char next(char ch){
    if (ch == 'z'){
        return 'a';
    }
    return (char)(ch+1);
}

int main(){
    cout << next('a');
    return 0;
}