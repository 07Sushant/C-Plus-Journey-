
#include <iostream>
#include <cmath>

class Demo {
private:
    int n;

public:
    Demo(int value) : n(value) {
        std::cout << "Inside Constructor" << std::endl;
    }

    void display() {
        int square = n * n;
        double squareRoot = sqrt(n);
        std::cout << "square = " << square << std::endl;
        std::cout << "square root = " << squareRoot << std::endl;
    }

    ~Demo() {
        std::cout << "Inside Destructor" << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;
    
    Demo obj(n);
    
    obj.display();
    
    return 0;
}