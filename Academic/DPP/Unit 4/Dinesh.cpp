
#include <iostream>
#include <iomanip>

class ItemType {
public:
    virtual double calculateAmount() = 0;
};

class wooden : public ItemType {
private:
    int noOfItems;
    double cost;

public:
    void get() {
        std::cin >> noOfItems >> cost;
    }

    double calculateAmount() override {
        return noOfItems * cost;
    }
};

class electronics : public ItemType {
private:
    double cost;

public:
    void get() {
        std::cin >> cost;
    }

    double calculateAmount() override {
        return cost * 0.8; // Apply a 20% discount.
    }
};

int main() {
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        wooden w;
        w.get();
        std::cout << std::fixed << std::setprecision(2) << w.calculateAmount();
    }
    else if (choice == 2) {
        electronics e;
        e.get();
        std::cout << std::fixed << std::setprecision(2) << e.calculateAmount();
    }

    return 0;
}

//Sushant