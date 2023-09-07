#include <iostream>
#include <algorithm>

using namespace std;

void findFrequency(int* arr, int size) {
    sort(arr, arr + size);

    int currentElement = arr[0];
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == currentElement) {
            count++;
        } else {
            cout << currentElement << " - " << count << " time" << (count > 1 ? "s" : "") << endl;
            currentElement = arr[i];
            count = 1;
        }
    }

    cout << currentElement << " - " << count << " time" << (count > 1 ? "s" : "") << endl;
}

int main() {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findFrequency(arr, size);

    return 0;
}

//Sushant