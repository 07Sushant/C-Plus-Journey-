#include <iostream>
using namespace std;

class time1 {
    int hrs;

public:
    time1(int t) {
        hrs = t / 60;
        cout << hrs;
    }
};

int main() {
    time1 t1(85);
    return 0;
}
