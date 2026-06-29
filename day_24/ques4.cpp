#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<bool> visited(256, false);

    for (char c : s) {
        if (!visited[c]) {
            cout << c;
            visited[c] = true;
        }
    }

    return 0;
}
