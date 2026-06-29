#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    int count = 1;

    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && s[i] == s[i + 1])
            count++;
        else {
            ans += s[i];
            ans += to_string(count);
            count = 1;
        }
    }

    cout << ans;

    return 0;
}