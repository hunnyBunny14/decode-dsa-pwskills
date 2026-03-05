#include <iostream>
using namespace std;

// ITERATIVE Fibonacci Series (1-based)
void fiboIT(int n)
{
    int a = 0, b = 1;
    int count = 1;

    cout << "Fibonacci Series ITERATIVE: ";

    while (count <= n)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        count++;
    }
    cout << endl;
}

// RECURSIVE Fibonacci (1-based indexing)
int fiboREC(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fiboREC(n - 1) + fiboREC(n - 2);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    fiboIT(n);

    cout << "Fibonacci Series RECURSIVE: ";
    for (int i = 1; i <= n; i++)
    {
        cout << fiboREC(i) << " ";
    }

    cout << endl;
    cout << "FOURTH TERM OF FIBO : " << fiboREC(4);

    return 0;
}
