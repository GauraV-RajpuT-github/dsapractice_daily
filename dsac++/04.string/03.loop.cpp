#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello world";
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";
        count++;
    }

    // cout << endl;  <-- removed

    cout << count;
    return 0;
}
// This program prints each character of the string "hello world" followed by a space