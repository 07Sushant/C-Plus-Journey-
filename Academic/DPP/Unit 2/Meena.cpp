// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class FitnessData {
public:
    string name;
    double weight;

    FitnessData(string n, double w) {
        name = n;
        weight = w;
    }

    void updateWeight(double newWeight) {
        weight = newWeight;
    }
};

int main() {
    string name;
    double initialWeight, updatedWeight;

    cin >> name >> initialWeight >> updatedWeight;

    FitnessData meena(name, initialWeight);
    meena.updateWeight(updatedWeight);

    cout << "Updated fitness information:" << endl;
    cout << "Name: " << meena.name << endl;
    cout << "Weight: " << meena.weight << endl;

    return 0;
}

//Sushant
