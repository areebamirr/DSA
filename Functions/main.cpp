#include <iostream>
using namespace std;

// How does functions work in the memory.
// Its work like a stack
// Since sayHello() came first. Then it would execute, pass the value to main() function. It will vanish in stack memory after the execution
// Then main() function completes its work then return to 0 hence main() function in the stack memory also vanish

void sayHello(){
    cout << "Hello ;)\n";
}

int main(){
    sayHello();
    sayHello();
    return 0;
}