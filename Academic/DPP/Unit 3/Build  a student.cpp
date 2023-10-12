#include <iostream>
#include <cstring>

class Student {
private:
    char name[21];
    int birthYear;

public:
    Student() {
        strcpy(name, "XYZ");
        birthYear = 2023;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Year born: " << birthYear << std::endl;
    }

    Student(const char* n, int year) {
        strcpy(name, n);
        birthYear = year;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Year born: " << birthYear << std::endl;
    }

    ~Student() {
        if (strcmp(name, "XYZ") != 0) {
            std::cout << "Destroyed object: " << name << std::endl;
        }
    }
};

int main() {
    char inputName[21];
    int inputYear;

    std::cin.getline(inputName, 21);
    std::cin >> inputYear; 
    std::cin.ignore(); 

    Student s1; 
    Student s2(inputName, inputYear); 

    return 0;
}
