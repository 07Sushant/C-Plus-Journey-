// You are using GCC
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product() {
        name = "";
        price = 0.0;
        quantity = 0;
    }

    void setValues(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    void displayDetails() {
        cout << "Product Name: " << name << endl;
        cout << "Total Price: " << fixed << setprecision(2) << price * quantity << endl;
    }
};

int main() {
    int maxProducts;
    cin >> maxProducts;

    Product *cart = new Product[maxProducts];

    for (int i = 0; i < maxProducts; i++) {
        string name;
        double price;
        int quantity;

        cin.ignore();
        getline(cin, name);
        cin >> price >> quantity;

        cart[i].setValues(name, price, quantity);
    }

    cout << "Shopping Cart details:" << endl;
    for (int i = 0; i < maxProducts; i++) {
        cart[i].displayDetails();
    }

    delete[] cart; 

    return 0;
}

//Sushant