#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Duplicate elements are: ";
    for (auto x : freq) {
        if (x.second > 1) {
            cout << x.first << " ";
        }
    }

    return 0;
}