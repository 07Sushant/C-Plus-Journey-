
#include <iostream>
#include <vector>

class LuckyChecker {
private:
    std::vector<int> lotteryNumbers;

    bool hasRepeatedDigits(int num) {
        std::vector<bool> digits(10, false); // To track the occurrence of each digit

        while (num > 0) {
            int digit = num % 10;
            if (digits[digit]) {
                return true; // Repeated digit found
            }
            digits[digit] = true;
            num /= 10;
        }

        return false; // No repeated digits found
    }

public:
    LuckyChecker(int n, const std::vector<int>& numbers) {
        lotteryNumbers = numbers;
    }

    void isLucky(int num) {
        if (hasRepeatedDigits(num)) {
            std::cout << num << " is not Lucky" << std::endl;
        } else {
            std::cout << num << " is Lucky" << std::endl;
        }
    }
};

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    LuckyChecker luckyChecker(n, numbers);

    for (int i = 0; i < n; i++) {
        luckyChecker.isLucky(numbers[i]);
    }

    return 0;
}