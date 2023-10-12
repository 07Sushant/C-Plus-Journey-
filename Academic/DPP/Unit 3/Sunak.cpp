#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream inputFile("triangle.txt");
    if (!inputFile) {
        cerr << "Failed to open the input file!" << endl;
        return 1;
    }

    int n;
    inputFile >> n;

    if (n > 10) {
        cout << "Exceeding limit!" << endl;
        inputFile.close();
        return 0;
    }

    for (int i = 0; i < n; i++) {
        double base, height;
        inputFile >> base >> height;
        double area = 0.5 * base * height;
        cout << fixed << setprecision(2) << area << endl;
    }

    inputFile.close();
    return 0;
}
