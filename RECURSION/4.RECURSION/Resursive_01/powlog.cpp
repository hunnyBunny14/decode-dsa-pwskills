#include <iostream>
using namespace std;

int power(int x, int n) {

    if (n == 0)
        return 1;

    int ans = power(x, n / 2);

    if (n % 2 == 0)
        return ans * ans;
    else
        return ans * ans * x;
}

int main() {
    int b, e;

    cout << "Enter base : ";
    cin >> b;

    cout << "Enter expo : ";
    cin >> e;

    cout << b << " to power " << e << " is " << power(b, e);
    return 0;
}
