#include <iostream>
#include <algorithm>
using namespace std;

void findFrequency(int* arr, int size) {
    sort(arr, arr + size);
    for (int i = 0; i < size; ++i) {
    if (i == 0 || arr[i] != arr[i - 1]) {
    int count = 1;
    for (int j = i + 1; j < size; ++j) {
    if (arr[j] == arr[i]) {
    ++count;
    } else {
    break;
    }
}
    cout << arr[i] << " - " << count << " times" << endl;
    }
}
}

int main() {
int size;
cin >> size;
int arr[size];
for (int i = 0; i < size; ++i) {
cin >> arr[i];
    }
    findFrequency(arr, size);
    return 0;
}



// working on error 