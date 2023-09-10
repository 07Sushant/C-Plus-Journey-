#include <iostream>
#include <string>
#include <vector>

using namespace std;

class OnlineShop {
private:
    string shopName;
    vector<string> productCatalog;
    vector<float> prices;

public:
    // Constructor to initialize the shop name and catalog
    OnlineShop(const string& name, int catalogSize) {
        shopName = name;
        productCatalog.resize(catalogSize);
        prices.resize(catalogSize);
    }

    // Function to add a product to the catalog
    void addProduct(int index, const string& product, float price) {
        productCatalog[index] = product;
        prices[index] = price;
    }

    // Function to search for a product by name
    string searchProduct(const string& productName) {
        for (int i = 0; i < productCatalog.size(); i++) {
            if (productCatalog[i] == productName) {
                return "Product found: " + productName + "; Price: " + to_string(prices[i]);
            }
        }
        return "Product not found.";
    }

    // Function to display available products with their prices
    void displayProducts() {
        cout << "Available products:" << endl;
        for (int i = 0; i < productCatalog.size(); i++) {
            cout << productCatalog[i] << " " << prices[i] << endl;
        }
    }
};

int main() {
    string shopName;
    int catalogSize;
    string productNameToSearch;

    // Input shop name and catalog size
    getline(cin, shopName);
    cin >> catalogSize;

    // Create an OnlineShop object
    OnlineShop shop(shopName, catalogSize);

    // Input products and prices
    for (int i = 0; i < catalogSize; i++) {
        string product;
        float price;
        cin >> product >> price;
        shop.addProduct(i, product, price);
    }

    // Input the product name to search
    cin.ignore(); // Consume newline
    getline(cin, productNameToSearch);

    // Search for the product and display results
    string searchResult = shop.searchProduct(productNameToSearch);
    cout << searchResult << endl;

    // Display available products
    shop.displayProducts();

    return 0;
}
