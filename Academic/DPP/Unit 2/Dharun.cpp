#include <iostream>
#include <algorithm>
using namespace std;

int findSmallestDifference(int scores[], int n) {
    sort(scores, scores + n); // sort the array in ascending order
    int min_diff = scores[1] - scores[0]; // initialize the minimum difference to the difference between the first two scores

    for (int i = 2; i < n; i++) {
        int diff = scores[i] - scores[i - 1]; // calculate the difference between the current score and the previous score
        if (diff < min_diff) {
            min_diff = diff; // update the minimum difference if the current difference is smaller
        }
    }

    return min_diff;
}

int main() {
    int n;
  
    cin >> n;

    int scores[n];
   
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int smallest_diff = findSmallestDifference(scores, n);
    cout <<smallest_diff;

    return 0;
}
