
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

const int MAX_ASSETS = 20;

class InvalidAssetIDException : public std::exception {
public:
    const char* what() const throw() {
        return "Error: Invalid asset ID.";
    }
};

class NegativeValueException : public std::exception {
public:
    const char* what() const throw() {
        return "Error: Asset value cannot be negative.";
    }
};

class Asset {
public:
    Asset(const std::string& id, double value) : id(id), value(value) {}

    const std::string& getID() const {
        return id;
    }

    double getValue() const {
        return value;
    }

    void updateValue(double newValue) {
        if (newValue < 0) {
            throw NegativeValueException();
        }
        value = newValue;
    }

private:
    std::string id;
    double value;
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Asset> assets;
    std::string id;
    double value;

    for (int i = 0; i < n; ++i) {
        std::cin >> id >> value;
        if (assets.size() >= MAX_ASSETS) {
            std::cout << "Error: Maximum number of assets reached." << std::endl;
            return 0;
        }
        assets.emplace_back(id, value);
        std::cout << "Asset with ID " << id << " added with an initial value of " << value << std::endl;
    }

    std::cin.ignore();  // Clear the newline character from the input buffer.

    std::string updateID;
    double newValue;

    std::cin >> updateID;
    bool assetUpdated = false;

    for (Asset& asset : assets) {
        if (asset.getID() == updateID) {
            try {
                std::cin >> newValue;
                asset.updateValue(newValue);
                std::cout << "Value of asset with ID " << asset.getID() << " updated to " << asset.getValue() << std::endl;
                assetUpdated = true;
                break;
            } catch (const NegativeValueException& e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
            }
        }
    }

    if (!assetUpdated) {
        std::cout << "Exception caught: " << InvalidAssetIDException().what() << std::endl;
    }

    return 0;
}