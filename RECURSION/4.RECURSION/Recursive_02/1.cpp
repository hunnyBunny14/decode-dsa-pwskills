#include <iostream>
using namespace std;
void pip(int n){
    if(n==0){
        return;
    }
    cout<<"Pre :"<<n<<endl; //Pre Recursion
    pip(n-1);
    cout<<"In :"<<n<<endl; //In Recursion
    pip(n-1);
    cout<<"Post :"<<n<<endl; //Post Recursion
}
int main() {
    pip(3);
    return 0;
}
//Recursion 
// Pre in Post Recursion
