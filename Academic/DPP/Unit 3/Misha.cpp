#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;

    std::cout << "";
    std::cin >> filename;

    std::ifstream file(filename);
    
    if (!file) {
        std::cout << "File '" << filename << "' opened successfully." << std::endl;
    } else {
        file.close();
        std::ifstream file2(filename);
        
        if (file2.is_open()) {
            std::cout << "File '" << filename << "' opened successfully." << std::endl;
            file2.close(); 
        } else {
            std::cout << "An error occurred while opening '" << filename << "'" << std::endl;
        }
    }

    std::cout << "File '" << filename << "' closed successfully." << std::endl;

    return 0;
}

