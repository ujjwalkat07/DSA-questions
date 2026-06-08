#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << largest;

    return 0;
}