#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word = "", longest = "";

    getline(cin, str);

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        } else {
            word += str[i];
        }
    }

    cout << "Longest word: " << longest;

    return 0;
}