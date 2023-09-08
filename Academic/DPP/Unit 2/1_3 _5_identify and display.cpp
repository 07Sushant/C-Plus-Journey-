#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[50];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool foundOdd = false;

    cout << "Output: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            foundOdd = true;
        }
    }

    if (!foundOdd) {
        cout << "Invalid Input";
    }

    cout << endl;

    return 0;
}


//Sushant