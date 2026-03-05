#include <iostream>
using namespace std;
int stair_1_2(int n){
    if (n==1) return 1;
    if(n==2) return 2;
    return stair_1_2(n-1)+stair_1_2(n-2);
}
int stair_1_2_3(int n){
    if (n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair_1_2_3(n-1)+stair_1_2_3(n-2)+stair_1_2_3(n-3);
}

int main() { 
    int n;
    cout<<"Enter the no of stair : ";
    cin>>n;
    int res =stair_1_2(n);
    cout<<"No of ways in "<<n<<" stairs is : "<<res;
    return 0;
}   