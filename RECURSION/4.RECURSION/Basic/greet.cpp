#include <iostream>
using namespace std;

void greet(int n) {
    if (n <= 0) {
        return;
    }
    greet(n - 1);
    cout << n << " Hello, World!" << endl;
}

int main() {
    greet(5);
    return 0;
}
// This program prints "Hello, World!" five times using recursion.