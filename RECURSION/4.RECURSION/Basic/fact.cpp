#include <iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
void factupto(int n){
    for(int i=0;i<=n;i++){
        cout<<"Factorial of "<<i<<" is "<<fact(i)<<endl;
    }
}
int main() {
    int n;
    cout<<"Enter the N :";
    cin>>n;
    int fct = fact(n);
    cout<<"Factorial of "<<n<<" is "<<fct<<endl;
    cout<<"Factorials up to "<<n<<":"<<endl;
    factupto(n);

    return 0;
}