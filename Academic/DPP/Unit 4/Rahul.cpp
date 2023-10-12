#include <iostream>
#include <string>
#include <iomanip>

class Shape {
public:
    Shape(const std::string& name) : name(name) {
        std::cout << "Shape Constructor: Creating a shape - " << name << std::endl;
    }

    virtual ~Shape() {
        std::cout << "Shape Destructor: Destroying a shape - " << name << std::endl;
    }

    virtual float calculateArea() const = 0;

protected:
    std::string name;
};

class Circle : public Shape {
public:
    Circle(const std::string& name, float radius) : Shape(name), radius(radius) {
        std::cout << "Circle Constructor: Creating a circle - " << name << std::endl;
    }

    ~Circle() {
        std::cout << "Circle Destructor: Destroying a circle - " << name << std::endl;
    }

    float calculateArea() const override {
        return 3.14f * radius * radius;
    }

private:
    float radius;
};

class Square : public Shape {
public:
    Square(const std::string& name, float side) : Shape(name), side(side) {
        std::cout << "Square Constructor: Creating a square - " << name << std::endl;
    }

    ~Square() {
        std::cout << "Square Destructor: Destroying a square - " << name << std::endl;
    }

    float calculateArea() const override {
        return side * side;
    }

private:
    float side;
};

int main() {
    std::string circleName, squareName;
    float circleRadius, squareSide;

    std::cin >> circleName >> circleRadius >> squareName >> squareSide;

    Circle circle(circleName, circleRadius);
    Square square(squareName, squareSide);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area of " << circleName << ": " << circle.calculateArea() << std::endl;
    std::cout << "Area of " << squareName << ": " << square.calculateArea() << std::endl;

    return 0;
}
