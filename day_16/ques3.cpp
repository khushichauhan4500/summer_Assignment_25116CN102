#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter size ";
    cin >> n;

    int arr[n];

    cout << "Enter elements to be entered  ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter sum whose pair is to be identified ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " " << arr[j];
                found = true;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        cout << "No pair found";

    return 0;
}