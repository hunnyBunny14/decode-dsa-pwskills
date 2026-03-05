#include <iostream>
#include <vector>
using namespace std;

int UpperBound(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid + 1;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main() {
    vector<int> arr = {1, 4, 6, 10, 15, 19};
    int target = 16;

    int index = UpperBound(arr, target);

    cout << "Upper Bound Index of " << target << " is: " << index << endl;

    if (index < arr.size())
        cout << "Upper Bound Value: " << arr[index] << endl;
    else
        cout << "No upper bound exists" << endl;

    return 0;
}
