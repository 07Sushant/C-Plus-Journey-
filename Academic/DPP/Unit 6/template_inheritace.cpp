#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class Employee {
public:
    Employee(int id, const string& name, T salary) : id(id), name(name), salary(salary) {}

    void displayDetails() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }

    T getSalary() const {
        return salary;
    }

private:
    int id;
    string name;
    T salary;
};

template <typename T>
class FullTimeEmployee : public Employee<T> {
public:
    FullTimeEmployee(int id, const string& name, T salary) : Employee<T>(id, name, salary) {}
};

template <typename T>
class PartTimeEmployee : public Employee<T> {
public:
    PartTimeEmployee(int id, const string& name, T salary) : Employee<T>(id, name, salary) {}
};

int main() {
    int numFullTimeEmployees, numPartTimeEmployees;
    cin >> numFullTimeEmployees;

    vector<FullTimeEmployee<int>> fullTimeEmployees;
    int fullTimeTotalSalary = 0;

    for (int i = 0; i < numFullTimeEmployees; i++) {
        int id, salary;
        string name;
        cin >> id >> name >> salary;
        fullTimeEmployees.push_back(FullTimeEmployee<int>(id, name, salary));
        fullTimeTotalSalary += salary;
    }

    cin >> numPartTimeEmployees;

    vector<PartTimeEmployee<int>> partTimeEmployees;
    int partTimeTotalSalary = 0;

    for (int i = 0; i < numPartTimeEmployees; i++) {
        int id, salary;
        string name;
        cin >> id >> name >> salary;
        partTimeEmployees.push_back(PartTimeEmployee<int>(id, name, salary));
        partTimeTotalSalary += salary;
    }

    cout << "Full-time Employee Details:" << endl;
    for (const FullTimeEmployee<int>& employee : fullTimeEmployees) {
        employee.displayDetails();
    }
    cout << "Total Salary Expenditure for Full-time Employees: " << fullTimeTotalSalary << endl;

    cout << "Part-time Employee Details:" << endl;
    for (const PartTimeEmployee<int>& employee : partTimeEmployees) {
        employee.displayDetails();
    }
    cout << "Total Salary Expenditure for Part-time Employees: " << partTimeTotalSalary << endl;

    return 0;
}