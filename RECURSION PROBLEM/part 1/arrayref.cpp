#include <iostream>
using namespace std;
void swp(int arr[],int n){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main() {
    int arr[2] = {1,2};
    cout<<"Before changes :"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    swp(arr,2);
    cout<<"After changes :"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    return 0;
}