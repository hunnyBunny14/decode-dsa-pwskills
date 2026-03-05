#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(const vector<int>& arr, int target) {
    int low = 0,
        high = arr.size()-1;
    while(high)

}

int main() {
    vector<int> arr = {1,2,2,2,3,4,5};
    int target = 2;

    cout << "First occurrence index: "
         << firstOccurrence(arr, target);
}
