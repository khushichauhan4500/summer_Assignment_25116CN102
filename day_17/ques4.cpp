#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Common (duplicate) elements are: ";

    for (int i = 0; i < n; i++) {
        bool printed = false;

        // Check if already printed
        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                printed = true;
                break;
            }
        }

        if (printed)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}