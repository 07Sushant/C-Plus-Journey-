
#include <iostream>

class Numbers {
private:
    int num1;
    int num2;
    int num3;

public:
    Numbers(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3) {}

    void print() {
        std::cout << num1 << " " << num2 << " " << num3 << std::endl;
    }

    void printSum() {
        int sum = num1 + num2 + num3;
        std::cout << sum << std::endl;
    }

    void printGreatest() {
        int greatest = num1;
        if (num2 > greatest) {
            greatest = num2;
        }
        if (num3 > greatest) {
            greatest = num3;
        }
        std::cout << greatest << std::endl;
    }
};

int main() {
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    Numbers numbers(num1, num2, num3);

    numbers.print();
    numbers.printSum();
    numbers.printGreatest();

    return 0;
}