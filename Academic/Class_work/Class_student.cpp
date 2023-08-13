#include <iostream>
#include <string>

using namespace std;


class student {
public:
    int id;
    string name;
    string registration_number;
};

void takeInput(student& student) {
    cout << "Enter student ID: ";
    cin >> student.id;
    cin.ignore(); 

    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter registration number: ";
    getline(cin, student.registration_number);
}

void printstudentDetails(const student& student) {
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Reg_No: " << student.registration_number << endl;
}

int main() {
    student student;

    takeInput(student);

    cout << "\nstudent Details:" << endl;
    printstudentDetails(student);

    return 0;
}