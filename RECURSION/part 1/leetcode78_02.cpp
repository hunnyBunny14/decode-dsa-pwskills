#include <iostream>
#include <vector>
using namespace std;

void subbs(string org, string loc) {
    // Base case
    if (org == "") {
        cout << loc << endl;
        return;   // 🔥 VERY IMPORTANT
    }

    char ch = org[0];

    // Include character
    subbs(org.substr(1), loc + ch);

    // Exclude character
    subbs(org.substr(1), loc);
}

int main() {
    string str = "abc";
    subbs(str, "");
    return 0;
}
