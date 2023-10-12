
#include <iostream>

class Base {
public:
    Base(int val) {
        std::cout << "Base Class Constructor" << std::endl;
        setValue(val);
    }

    void setValue(int val) {
        value = val;
        std::cout << "Value set: " << value << std::endl;
    }

private:
    int value;
};

class InitializerList {
public:
    InitializerList(int val) : base(val) {
        std::cout << "InitilizerList's Constructor" << std::endl;
    }

private:
    Base base;
};

int main() {
    int N;
    std::cin >> N;

    InitializerList obj(N);

    return 0;
}