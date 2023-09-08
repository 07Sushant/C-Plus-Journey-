
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class OnlineShop {
public:
    OnlineShop(string shopName, int catalogSize) {
        this->shopName = shopName;
        productCatalog.resize(catalogSize);
        productPrices.resize(catalogSize);
    }

    void addProduct(int index, string productName, float productPrice) {
        if (index >= 0 && index < productCatalog.size()) {
            productCatalog[index] = productName;
            productPrices[index] = productPrice;
        }
    }

    void searchProduct(string productName) {
        bool found = false;
        for (int i = 0; i < productCatalog.size(); i++) {
            if (productCatalog[i] == productName) {
                cout << "Product found: " << productName << "; Price: " << productPrices[i] << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Product not found." << endl;
        }
    }

    void displayProducts() {
        cout << "Available products:" << endl;
        for (int i = 0; i < productCatalog.size(); i++) {
            cout << productCatalog[i] << " " << productPrices[i] << endl;
        }
    }

private:
    string shopName;
    vector<string> productCatalog;
    vector<float> productPrices;
};

int main() {
    string shopName;
    int catalogSize;
    cin.ignore();
    getline(cin, shopName);
    cin >> catalogSize;

    OnlineShop shop(shopName, catalogSize);

    for (int i = 0; i < catalogSize; i++) {
        string productName;
        float productPrice;
        cin.ignore();
        getline(cin, productName);
        cin >> productPrice;
        shop.addProduct(i, productName, productPrice);
    }

    string searchProduct;
    cin.ignore();
    getline(cin, searchProduct);

    shop.searchProduct(searchProduct);

    shop.displayProducts();

    return 0;
}

//Susahnt