#include <iostream>
#include <cmath>

class ArmstrongChecker {
public:
    virtual bool isArmstrong(int number) = 0;
};

class ArmstrongCheckerImpl : public ArmstrongChecker {
public:
    bool isArmstrong(int number) override {
        int originalNumber = number;
        int numDigits = 0;
        int sum = 0;

        while (number != 0) {
            numDigits++;
            number /= 10;
        }

        number = originalNumber; // Reset the number to the original value

        while (number != 0) {
            int digit = number % 10;
            sum += pow(digit, numDigits);
            number /= 10;
        }

        return (sum == originalNumber);
    }
};

int main() {
    int number;
    std::cin >> number;

    ArmstrongCheckerImpl armstrongChecker;
    if (armstrongChecker.isArmstrong(number)) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
