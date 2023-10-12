
#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string brand;

public:
    Vehicle(const std::string& b) : brand(b) {}

    virtual void displayInfo() = 0;
};

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const std::string& b, int d) : Vehicle(b), doors(d) {}

    void displayInfo() override {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Number of Doors: " << doors << std::endl;
    }
};

class Bicycle : public Vehicle {
private:
    int gears;

public:
    Bicycle(const std::string& b, int g) : Vehicle(b), gears(g) {}

    void displayInfo() override {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Number of Gears: " << gears << std::endl;
    }
};

int main() {
    std::string carBrand, bicycleBrand;
    int carDoors, bicycleGears;
    std::cin >> carBrand >> carDoors >> bicycleBrand >> bicycleGears;

    Car myCar(carBrand, carDoors);
    Bicycle myBicycle(bicycleBrand, bicycleGears);

    myCar.displayInfo();
    std::cout << std::endl;
    myBicycle.displayInfo();

    return 0;
}