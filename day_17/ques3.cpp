#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int a[n1];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int b[n2];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    set<int> s1, intersection;

    for (int i = 0; i < n1; i++)
        s1.insert(a[i]);

    for (int i = 0; i < n2; i++) {
        if (s1.find(b[i]) != s1.end())
            intersection.insert(b[i]);
    }

    cout << "Intersection: ";
    for (int x : intersection)
        cout << x << " ";

    return 0;
}