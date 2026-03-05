#include <iostream>
using namespace std;
void printNto1(int n){
    if(n==0) return;
    cout<<n<<endl;
    return printNto1(n-1);
}
int main() {
    int n;
    cout<<"Enter the N :";
    cin>>n;
    printNto1(n);
    return 0;
}