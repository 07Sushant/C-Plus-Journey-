#include <iostream>

using namespace std;

class Distance {
private:
  int feet;
  int inches;

public:
  Distance() : feet(0), inches(0) {}
  Distance(int feet, int inches) : feet(feet), inches(inches) {}

  void displayDistance() {
    cout << feet << "' " << inches << endl;
  }

  // Overload the unary operator - to decrement distance by one foot and one inch.
  Distance operator-() {
    feet -= 1;
    if (inches == 0) {
      feet -= 1;
      inches = 12;
    } else {
      inches -= 1;
    }
    return Distance(feet, inches);
  }
};

int main() {
  int feet, inches;
  cin >> feet >> inches;

  Distance distance(feet, inches);

  // Decrement the distance by one foot and one inch.
  distance = -distance;

  distance.displayDistance();

  return 0;
}

