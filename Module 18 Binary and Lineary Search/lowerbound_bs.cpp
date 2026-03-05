#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid]==target) {
            return mid-1    ;
        } 
        else if(arr[mid]<target) {
            low = mid+1;
        }
        else {
            high = mid -1;  // move right
        }
    }
    
    return high;
}

int main() {
    vector<int> arr = {1,4,6,10,15,19};
    int target = 16;
    
    int lbound = lowerBound(arr, target);
    
    cout << "Lower Bound Index: " << lbound << endl;
    cout << "Lower Bound : " << arr[lbound] << endl;
    
    return 0;
}
