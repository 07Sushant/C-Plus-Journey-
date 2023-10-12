
#include <iostream>
using namespace std;

class Rectangle {
protected:
    double width;
    double length;

public:
    Rectangle(double w, double l) : width(w), length(l) {}

    double getArea() const {
        return width * length;
    }

    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    void reset() {
        width = 0.0;
        length = 0.0;
    }
};

class Cube : public Rectangle {
private:
    double height;

public:
    Cube(double w, double l, double h) : Rectangle(w, l), height(h) {}

    double getHeight() const {
        return height;
    }

    double getVolume() const {
        return getArea() * height;
    }

    void reset() {
        Rectangle::reset();
        height = 0.0;
    }
};

int main() {
    double cubeWidth, cubeLength, cubeHeight;
    cin >> cubeWidth >> cubeLength >> cubeHeight;

    Cube myCube(cubeWidth, cubeLength, cubeHeight);

    cout << "Width: " << myCube.getWidth() << endl;
    cout << "Length: " << myCube.getLength() << endl;
    cout << "Height: " << myCube.getHeight() << endl;
    cout << "Base area: " << myCube.getArea() << endl;
    cout << "Volume: " << myCube.getVolume() << endl;

    return 0;
}