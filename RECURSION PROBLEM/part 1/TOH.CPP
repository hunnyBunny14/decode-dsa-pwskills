#include <iostream>
using namespace std;

// Function to solve Tower of Hanoi
void TOH(int n, char source, char helper, char destination)
{
    if (n == 0)
        return;

    // Move n-1 disks from source to helper
    TOH(n - 1, source, destination, helper);

    // Move the nth disk
    cout << "Move disk from " << source << " -> " << destination << endl;

    // Move n-1 disks from helper to destination
    TOH(n - 1, helper, source, destination);
}

int main()
{
    int n;

    cout << "===============================" << endl;
    cout << "   TOWER OF HANOI SOLUTION" << endl;
    cout << "===============================" << endl;

    cout << "Enter number of disks: ";
    cin >> n;

    cout << "\nSteps to solve Tower of Hanoi:\n" << endl;

    TOH(n, 'A', 'B', 'C');

    cout << "\nCompleted successfully!" << endl;

    return 0;
}
