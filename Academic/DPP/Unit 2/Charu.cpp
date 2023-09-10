// You are using GCC
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

class RestaurantMenu {
private:
    string menuName;
    string* menuItems;
    float* prices;
    int itemCount;

public:
    RestaurantMenu(string name, int n) {
        menuName = name;
        menuItems = new string[n];
        prices = new float[n];
        itemCount = n;
    }

    void addMenuItem(string item, float price, int index) {
        menuItems[index] = item;
        prices[index] = price;
    }

    void displayPrice(string itemName) {
        for (int i = 0; i < itemCount; i++) {
            if (menuItems[i] == itemName) {
                cout << fixed << setprecision(2) << prices[i] << endl;
                return;
            }
        }
        cout << "Item not found." << endl;
    }

    ~RestaurantMenu() {
        delete[] menuItems;
        delete[] prices;
    }
};

int main() {
    string menuName;
    int n;
    getline(cin, menuName);
    cin >> n;
    cin.ignore(); 

    RestaurantMenu menu(menuName, n);

    for (int i = 0; i < n; i++) {
        string item;
        float price;
        getline(cin, item);
        cin >> price;
        cin.ignore(); 
        menu.addMenuItem(item, price, i);
    }

    string searchItem;
    getline(cin, searchItem);

    menu.displayPrice(searchItem);

    return 0;
}

//Susahnt

