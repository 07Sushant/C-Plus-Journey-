#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ItemDetails {
public:
    ItemDetails(string name, int number, float price) : name_(name), number_(number), price_(price) {}

    string name() const { return name_; }
    int number() const { return number_; }
    float price() const { return price_; }
private:
    string name_;
    int number_;
    float price_;
};

class DiscountDetails {
public:
    DiscountDetails(int percent) : percent_(percent) {}

    int percent() const { return percent_; }
private:
    int percent_;
};

class DiscountedItem : public ItemDetails, public DiscountDetails {
public:
    DiscountedItem(string name, int number, float price, int percent)
        : ItemDetails(name, number, price), DiscountDetails(percent) {}

    float discounted_price() const { return price() - (price() * percent()) / 100.0; }
};

int main() {
    int num_items;
    cin >> num_items;

    vector<DiscountedItem> items;

    for (int i = 0; i < num_items; i++) {
        string name;
        int number, price, discount_percent;
        cin >> name >> number >> price >> discount_percent;
        items.push_back(DiscountedItem(name, number, price, discount_percent));
    }

    float total_price = 0, total_discount = 0;
    int item_number = 1; 
    for (const DiscountedItem& item : items) {
        cout << "Details of item " << item_number++ << " : " << endl;
        cout << "\t1. Item Name: " << item.name() << endl;
        cout << "\t2. Item No.: " << item.number() << endl;
        cout << "\t3. Item Price: " << item.price() << endl;
        cout << "\t4. Discount Percent: " << item.percent() << endl;
        cout << "\t5. Discounted Price: " << item.discounted_price() << endl << endl;

        total_price += item.price();
        total_discount += item.discounted_price() - item.price();
    }

    cout << "Total Price: " << total_price << endl;
    cout << "Total Discount: " << abs(total_discount) << endl;

    return 0;
}

