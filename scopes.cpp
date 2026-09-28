#include <iostream>

using namespace std;

int* getAddress() {
    int x = 5;
    cout << "What is the address of x? It's " << &x << "\n\n";
    return &x; // variables created at the start of their scope get destroyed at the end of their scope
}

int main() {
    
    int x[90]; // you know how much memory is needed
    int* x = new int[]; // when you don't know how much memory is needed
    cout << "What is the address of x? It's " << getAddress() << "\n\n"; // returns 0 or crashes program. x gets destroyed at the end of the function because local variables get destroyed at the end of their scope

    return 0;
}