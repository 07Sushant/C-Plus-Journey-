#include <iostream>
using namespace std;

void sum(int x, int y) {
    cout << "Sum of integers: " << x + y << endl;
}

void sum(double x, double y) {
    cout << "Sum of doubles: " << x + y << endl;
}

void sum(char x, char y) {
    cout << "Sum of characters: " << static_cast<int>(x) + static_cast<int>(y) << endl;
}

int main() {
    int intX = 5;
    int intY = 10;
    double doubleX = 3.5;
    double doubleY = 2.5;
    char charX = 'A';
    char charY = 'B';

    sum(intX, intY);
    sum(doubleX, doubleY);
    sum(charX, charY);

    return 0;
}
