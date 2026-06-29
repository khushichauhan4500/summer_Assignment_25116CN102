#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool visited[256] = {false};

    for (int i = 0; i < str.length(); i++) {
        if (!visited[str[i]]) {
            cout << str[i];
            visited[str[i]] = true;
        }
    }

    return 0;
}