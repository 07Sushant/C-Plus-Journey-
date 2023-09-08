
#include <iostream>
#include <climits>  
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

int findMaxElement(int arr[MAX_ROWS][MAX_COLS], int n, int m) {
    int maxTemperature = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > maxTemperature) {
                maxTemperature = arr[i][j];
            }
        }
    }

    return maxTemperature;
}

int main() {
    int n, m;
    cin >> n >> m;
    int temperatureData[MAX_ROWS][MAX_COLS];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> temperatureData[i][j];
        }
    }

    int maxTemperature = findMaxElement(temperatureData, n, m);
    cout << maxTemperature << endl;

    return 0;
}


//Sushant