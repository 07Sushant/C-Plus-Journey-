#include <iostream>
#include <string>

class Automobile {
public:
    Automobile(const std::string& make, int model)
        : make(make), model(model) {}

    void printBasicInfo() {
        std::cout << "Automobile data: Make=" << make << " Model=" << model << std::endl;
    }

    ~Automobile() {
        std::cout << "Destroying Automobile\n" << std::endl;
    }

private:
    std::string make;
    int model;
};

class Car : public Automobile {
public:
    Car(const std::string& make, int model, int doors)
        : Automobile(make, model), doors(doors) {}

    void printDetailedInfo() {
        Automobile::printBasicInfo();
        std::cout << "Doors = " << doors << std::endl;
    }

    ~Car() {
        std::cout << "Destroying Car" << std::endl;
    }

private:
    int doors;
};

class Truck : public Automobile {
public:
    Truck(const std::string& make, int model, const std::string& driveType)
        : Automobile(make, model), driveType(driveType) {}

    void printDetailedInfo() {
        Automobile::printBasicInfo();
        std::cout << "Drive Type = " << driveType << std::endl;
    }

    ~Truck() {
        std::cout << "Destroying Truck" << std::endl;
    }

private:
    std::string driveType;
};

int main() {
    std::string carMake, truckMake, truckDriveType;
    int carModel, carDoors, truckModel;

    std::cin >> carMake;
    std::cin >> carModel;
    std::cin >> carDoors;

    Car car(carMake, carModel, carDoors); // Create Car object

    // Display car information
    car.printDetailedInfo();

    // Explicitly call the Car destructor
    car.~Car();

    // Print destruction messages

    // Repeat the process for the Truck
    std::cin >> truckMake;
    std::cin >> truckModel;
    std::cin >> truckDriveType;

    Truck truck(truckMake, truckModel, truckDriveType); // Create Truck object

    // Display truck information
    truck.printDetailedInfo();

    // Explicitly call the Truck destructor
    truck.~Truck();

    // Print destruction messages

    return 0;
}