#include <iostream>
using namespace std;

class B {
protected:
    int x;

public:
    B() {
        x = 0;
    }

    void get_dataB() {
        cout << "\n Enter the value of x: ";
        cin >> x;
    }
};

class DB1 : public virtual B {
protected:
    int y;

public:
    DB1() {
        y = 0;
    }

    void get_dataDB1() {
        cout << "\n Enter value of y: ";
        cin >> y;
    }
};

class DB2 : public virtual B {
protected:
    int z;

public:
    DB2() {
        z = 0;
    }

    void get_dataDB2() {
        cout << "\nEnter the value of z: ";
        cin >> z;
    }
};

class D : public DB1, public DB2 {
public:
    D() {
    }

    void sum() {
        int result;
        result = x + y + z;
        cout << "\n Result is: " << result;
    }
};

int main() {
    D obj1;
    obj1.get_dataB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.sum();
}
