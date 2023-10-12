#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    ofstream dummyFile;

    int n;
    cin >> n;

    if (n > 20) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int age;
        cin >> age;
        sum += age;
    }

    double average = static_cast<double>(sum) / n;
    cout << fixed << setprecision(1) << average << endl;

    dummyFile.open("ages.txt");
    dummyFile.close();

    return 0;
}

