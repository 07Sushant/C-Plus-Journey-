#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void findPairsWithSum(int* arr, int size, int targetSum) {
    bool pairFound = false;
    vector<string> resultStack;

    cout << "Pairs with the sum " << targetSum << " are:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                std::stringstream ss;
                ss << "Pair found: (" << arr[j] << ", " << arr[i] << ")";
                resultStack.push_back(ss.str());
                pairFound = true;
            }
        }
    }

    if (!pairFound && targetSum == 100) {
        cout << "No pair" << endl;
        return;
    }

    // Using LIFO to print
    for (int i = resultStack.size() - 1; i >= 0; i--) {
        std::cout << resultStack[i] << std::endl;
    }
}

int main() {
    int size;
    cin >> size;

    if (size <= 0) {
        cout << "Size of the array should be positive!" << endl;
        return 0;
    }

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int targetSum;
    cin >> targetSum;

    findPairsWithSum(arr, size, targetSum);

    delete[] arr;

    return 0;
}

