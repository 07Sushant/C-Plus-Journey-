
#include <iostream>
#include <string>
#include <cctype>  // For isdigit function

int main() {
    std::string username, password;
    
    // Input username and password
    std::getline(std::cin, username);
    std::getline(std::cin, password);
    
    try {
        if (password.length() < 6) {
            throw "Password must be at least 6 characters long";
        }
        
        bool hasDigit = false;
        for (char c : password) {
            if (std::isdigit(c)) {
                hasDigit = true;
                break;
            }
        }
        
        if (!hasDigit) {
            throw "Password must have at least one digit";
        }
        
        std::cout << "Password is Correct" << std::endl;
    } catch (const char* errorMessage) {
        std::cout << errorMessage << std::endl;
        std::cout << "Caught by Exception" << std::endl;
        std::cout << "Invalid Password Format!" << std::endl;
    }
    
    return 0;
}