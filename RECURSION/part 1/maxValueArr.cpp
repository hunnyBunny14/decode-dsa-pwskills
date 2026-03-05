#include <iostream>
#include <climits>
using namespace std;

// Function that returns maximum element (used in main)
int maxxi(int arr[], int n, int i, int maxx)
{
    if (i == n)
        return maxx;

    if (arr[i] > maxx)
        maxx = arr[i];

    return maxxi(arr, n, i + 1, maxx);
}

// Function that directly prints maximum element
void prntmax(int arr[], int n, int i, int maxx)
{
    if (i == n)
    {
        cout << "Max element by function in array: " << maxx << endl;
        return;
    }

    if (arr[i] > maxx)
        maxx = arr[i];

    prntmax(arr, n, i + 1, maxx);
}

// Function that returns max using recursion only
int prntmax2(int arr[], int n, int i)
{
    if (i == n)
        return INT_MIN;

    return max(arr[i], prntmax2(arr, n, i + 1));
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = maxxi(arr, n, 0, INT_MIN);
    cout << "Max element by main in array: " << res << endl;

    prntmax(arr, n, 0, INT_MIN);

    int res2 = prntmax2(arr, n, 0);
    cout << "Max element by pure recursion: " << res2 << endl;

    return 0;
}
