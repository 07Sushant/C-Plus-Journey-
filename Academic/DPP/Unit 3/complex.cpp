
#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0.0), imaginary(0.0) {}

    void setValues(double realPart, double imaginaryPart) {
        real = realPart;
        imaginary = imaginaryPart;
    }

    Complex sum(const Complex &other) const {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void display() const {
        std::cout << "Sum of two complex numbers is " << real << " + " << imaginary << "i" << std::endl;
    }

    ~Complex() {
        std::cout << "" << std::endl;
    }
};

int main() {
    Complex c1, c2, c3;
    double realPart, imaginaryPart;

    std::cin >> realPart >> imaginaryPart;
    c1.setValues(realPart, imaginaryPart);

    std::cin >> realPart >> imaginaryPart;
    c2.setValues(realPart, imaginaryPart);

    c3 = c1.sum(c2);

    c3.display();

    return 0;
}