#include <iostream>
using namespace std;
void pip(int n){
    if(n==0){
        return;
    }
    cout<<n;
    pip(n-1);
    cout<<n;
    pip(n-1);
    cout<<n;

}
int main() {
    cout<<"Enter a number: ";
    int n;  
    cin>>n;
    pip(n);
    return 0;
}
//Recursion 
// Pre in Post Recursion
