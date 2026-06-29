#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}