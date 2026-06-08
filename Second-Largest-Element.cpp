#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int slargest = INT_MIN;

    for (int i = 1; i < len; i++) {

        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }

    cout << "Second Largest = " << slargest;

    return 0;
}