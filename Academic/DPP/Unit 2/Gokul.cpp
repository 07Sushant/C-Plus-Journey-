#include <iostream>
#include <unordered_map>
#include <string>

class OnlineShop {
public:
    OnlineShop() {}

    void add_destination(const std::string& destination, int availability) {
        destinations[destination] = availability;
    }

    int check_availability(const std::string& destination) {
        if (destinations.find(destination) != destinations.end()) {
            return destinations[destination];
        }
        return 0;
    }

private:
    std::unordered_map<std::string, int> destinations;
};

int main() {
    OnlineShop online_shop;

    std::string shop_name;
    std::cin >> shop_name;

    int num_destinations;
    std::cin >> num_destinations;
    std::cin.ignore(); 
    for (int i = 0; i < num_destinations; ++i) {
        std::string destination;
        int availability;

        std::getline(std::cin, destination);
        std::cin >> availability;
        std::cin.ignore(); 
        online_shop.add_destination(destination, availability);
    }

    std::string check_destination;
    std::getline(std::cin, check_destination);

    int availability = online_shop.check_availability(check_destination);
    std::cout << availability << std::endl;

    return 0;
}
