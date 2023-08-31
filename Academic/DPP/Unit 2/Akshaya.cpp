
#include <iostream>

void findMinTemperature(void* data, int size) {
        if (size <= 0) {
        std::cout << "Invalid size" << std::endl;
            return;
        }
        
double* temperatures = static_cast<double*>(data);
double minTemperature = temperatures[0];
                
        for (int i = 1; i < size; ++i) {
        if (temperatures[i] < minTemperature) {
            minTemperature = temperatures[i];
    }
                    }
                    
        std::cout << minTemperature << std::endl;
}

int main() {
int size;
    std::cin >> size;
    if (size < 0 || size > 100) {
    std::cout << "Invalid size" << std::endl;
    return 0;
                }
                
double temperatures[size];
    for (int i = 0; i < size; ++i) {
    std::cin >> temperatures[i];
    }
    findMinTemperature(temperatures, size);
    return 0;
}

//Sushant