#include <iostream>
#include <iomanip>

class Money {
private:
    int rupee;
    int paise;

public:
    Money() : rupee(0), paise(0) {}

    void setRupee(int r) {
        rupee = r;
    }

    void setPaise(int p) {
        rupee += p / 100;
        paise = p % 100;
    }

    int getRupee() {
        return rupee;
    }

    int getPaise() {
        return paise;
    }
};

int main() {
    Money m1, m2;
    int rupee, paise;

    std::cin >> rupee >> paise;
    m1.setRupee(rupee);
    m1.setPaise(paise);

    std::cin >> rupee >> paise;
    m2.setRupee(rupee);
    m2.setPaise(paise);

    int totalRupee = m1.getRupee() + m2.getRupee();
    int totalPaise = m1.getPaise() + m2.getPaise();

    totalRupee += totalPaise / 100;
    totalPaise %= 100;

    std::cout << totalRupee << "." << std::setw(2) << std::setfill('0') << totalPaise << std::endl;

    return 0;
}
