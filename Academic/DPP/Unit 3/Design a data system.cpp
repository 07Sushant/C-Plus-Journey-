#include <iostream>
#include <vector>

class DataStore {
private:
    std::vector<int> integers;

public:
    DataStore() {}

    DataStore(const DataStore& old_datastore) {
        integers = old_datastore.integers; // Shallow copy, needs to be changed to deep copy
    }

    ~DataStore() {
        if (!integers.empty()) {
            std::cerr << "Error: Destroying a nonempty datastore" << std::endl;
        }
    }

    void add(int num) {
        integers.push_back(num);
    }

    void remove(int n) {
        if (n <= integers.size()) {
            integers.erase(integers.begin(), integers.begin() + n);
        }
        else {
            integers.clear();
        }
    }

    int size() const {
        return integers.size();
    }
};

int main() {
    int numElements, numDelete1, numDelete2;
    std::cin >> numElements;

    DataStore ds1;
    DataStore ds2;

    for (int i = 0; i < numElements; i++) {
        int num;
        std::cin >> num;
        ds1.add(num);
    }

    ds2 = DataStore(ds1); // Create a deep copy of ds1

    std::cin >> numDelete1;

    for (int i = 0; i < numDelete1; i++) {
        ds1.remove(1);
    }

    std::cin >> numDelete2;

    for (int i = 0; i < numDelete2; i++) {
        ds2.remove(1);
    }

    if (ds1.size() == 0) {
        std::cout << "Success" << std::endl;
    }
    else {
        std::cerr << "Error: Destroying a nonempty datastore" << std::endl;
    }

    if (ds2.size() == 0) {
        std::cout << "Success" << std::endl;
    }
    else {
        std::cerr << "Error: Destroying a nonempty datastore" << std::endl;
    }

    return 0;
}
