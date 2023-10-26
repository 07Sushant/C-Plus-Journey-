#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a struct to represent a laptop model
struct LaptopModel {
    string modelName;
    int assemblySteps;
};

// Function to add a new laptop model to the production line
template <typename T>
void addLaptopModel(vector<T>& models, const string& modelName, int assemblySteps) {
    if (models.size() < 15) {
        models.push_back({modelName, assemblySteps});
        cout << modelName << " - Added to the production line" << endl;
    } else {
        cout << "Production line is full. Cannot add more laptop models!" << endl;
    }
}

// Function to update the number of assembly steps for an existing laptop model
template <typename T>
void updateAssemblySteps(vector<T>& models, const string& modelName, int newAssemblySteps) {
    for (auto& model : models) {
        if (model.modelName == modelName) {
            model.assemblySteps = newAssemblySteps;
            cout << modelName << " - Updated" << endl;
            return;
        }
    }
    cout << modelName << " - Not found" << endl;
}

// Function to display all laptop models and their respective assembly steps
template <typename T>
void displayLaptopModels(const vector<T>& models) {
    for (const auto& model : models) {
        cout << "Model Name: " << model.modelName << ", Assembly Steps: " << model.assemblySteps << endl;
    }
}

int main() {
    vector<LaptopModel> laptopModels;

    while (true) {
        int choice;
        cin >> choice;

        if (choice == 1) {
            string modelName;
            int assemblySteps;
            cin.ignore();  // Consume the newline character
            getline(cin, modelName);
            cin >> assemblySteps;
            addLaptopModel(laptopModels, modelName, assemblySteps);
        } else if (choice == 2) {
            string modelName;
            int newAssemblySteps;
            cin.ignore();  // Consume the newline character
            getline(cin, modelName);
            cin >> newAssemblySteps;
            updateAssemblySteps(laptopModels, modelName, newAssemblySteps);
        } else if (choice == 3) {
            displayLaptopModels(laptopModels);
        } else if (choice == 4) {
            break; // Exit the program
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}