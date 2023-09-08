// You are using GCC
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    void setValues(int r, int i) {
        real = r;
        imaginary = i;
    }

    void displayValues() {
        cout << "Here the real part is " << real << endl;
        cout << "Here the imaginary part is " << imaginary << endl;
    }
};

int main() {
    Complex obj1, obj2;
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    obj1.setValues(real1, imaginary1);
    obj2.setValues(real2, imaginary2);

    obj1.displayValues();
    obj2.displayValues();

    return 0;
}

//Susahnt