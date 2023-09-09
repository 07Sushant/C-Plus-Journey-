#include <iostream>
#include <iomanip>

class Money {
public:
    int rupee;
    int paisa;

    Money(int r, int p) {
        rupee = r;
        paisa = p;
    }

    Money addMoney(const Money& other) {
        Money result(0, 0);
        result.rupee = rupee + other.rupee;
        result.paisa = paisa + other.paisa;

        if (result.paisa >= 100) {
            result.rupee += result.paisa / 100;
            result.paisa %= 100;
        }

        return result;
    }
};

int main() {
    int r1, p1, r2, p2;
    
    std::cin >> r1 >> p1;
    
    std::cin >> r2 >> p2;

    Money money1(r1, p1);
    Money money2(r2, p2);

    Money total = money1.addMoney(money2);

    std::cout << std::fixed << std::setprecision(2) << total.rupee << "." << std::setw(2) << std::setfill('0') << total.paisa << std::endl;

    return 0;
}


//Sushant