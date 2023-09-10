#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

public:
    // Constructor to initialize name and age
    Student(const std::string& n, int a) : name(n), age(a) {}

    // Function to update age using a pointer to a data member
    void updateAge(int newAge) {
        age = newAge;
    }

    // Function to display current and updated age
    void displayAge() {
        std::cout << "Current age: " << age << std::endl;
    }
};

int main() {
    std::string name;
    int currentAge, updatedAge;

    // Read student name from input
    std::getline(std::cin, name);

    // Read current age and updated age from input
    std::cin >> currentAge >> updatedAge;

    // Create a Student object with the provided information
    Student student(name, currentAge);

    // Display current age
    student.displayAge();

    // Update the age using a pointer to a data member
    student.updateAge(updatedAge);

    // Display updated age
    std::cout << "Updated age: " << student.age << std::endl;

    return 0;
}

