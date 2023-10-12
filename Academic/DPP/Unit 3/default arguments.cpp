
#include <iostream>
#include <iomanip> 

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Clock(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void displayTime() {
        std::cout << std::setfill('0') << std::setw(2) << hours << ":";
        std::cout << std::setfill('0') << std::setw(2) << minutes << ":";
        std::cout << std::setfill('0') << std::setw(2) << seconds << std::endl;
    }
};

int main() {
    int h, m, s;
    std::cin >> h >> m >> s;

    Clock time(h, m, s);
    time.displayTime();

    return 0;
}