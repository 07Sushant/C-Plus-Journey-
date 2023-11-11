#include <iostream>
using namespace std;

class Operation {
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
    void modulus();
};

inline void Operation::get() {
    int a, b;
    cin >> a >> b;
    
    cout << "Addition of two numbers: " << a + b << endl;
    cout << "Difference of two numbers: " << a - b << endl;
    cout << "Product of two numbers: " << a * b << endl;
    if(a == 0 || b == 0){
        cout<<"Division by zero not possible"<<endl;
    }
    else{
        cout << "Division of two numbers: " << a / b << endl;
    }
    if(a == 0 || b == 0){
        cout<<"Division by zero not possible"<<endl;
    }
    else{
        cout << "Modulus of two numbers: " << a % b << endl;
    }
}

int main() {
    Operation op;
    op.get();
    return 0;
}
