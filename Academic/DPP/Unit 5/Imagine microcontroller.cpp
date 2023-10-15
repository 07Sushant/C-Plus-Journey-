
#include <iostream>
#include <bitset>

class BinaryConverter {
public:
    std::string intToBinary(int number) {
        return "Binary representation: " + std::bitset<32>(number).to_string();
    }
};

int main() {
    int number;
    std::cin >> number;

    BinaryConverter converter;
    std::string binaryRepresentation = converter.intToBinary(number);

    std::cout << binaryRepresentation << std::endl;

    return 0;
}