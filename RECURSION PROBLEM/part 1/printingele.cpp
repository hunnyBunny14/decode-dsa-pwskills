#include <iostream>
using namespace std;

void prnt(const int arr[], int n,int i) {
    if(n==i) return;
        cout << i + 1 << ". Element of Array: " << arr[i] << endl;
        prnt(arr,n,i+1);
}

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element of array: ";
        cin >> arr[i];
    }

    prnt(arr, n,0);
    return 0;
}
