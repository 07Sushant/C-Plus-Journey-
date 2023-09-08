// You are using GCC
#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    std::getline(std::cin, str1);

    std::getline(std::cin, str2);

    std::cout << "The first string before swapping is: " << str1 << std::endl;
    std::cout << "The second string before swapping is: " << str2 << std::endl;

    std::swap(str1, str2);

    std::cout << "The first string after swapping is: " << str1 << std::endl;
    std::cout << "The second string after swapping is: " << str2 << std::endl;

    return 0;
}

//Sushant