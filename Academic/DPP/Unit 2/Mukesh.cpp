#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 10;

class Employee {
public:
    string name;
    int attendanceStatus;

    Employee() {
    }

    Employee(string n, int status) {
        name = n;
        attendanceStatus = status;
    }
};

int main() {
    int n;
    cin >> n;
    Employee employees[MAX_EMPLOYEES];

    for (int i = 0; i < n; i++) {
        string name;
        int status;
        cin >> name >> status;
        employees[i] = Employee(name, status);
    }

    cout << "Attendance Report:" << endl;
    for (int i = 0; i < n; i++) {
        cout << employees[i].name << ": ";
        if (employees[i].attendanceStatus == 1) {
            cout << "Present";
        } else {
            cout << "Absent";
        }
        cout << endl;
    }

    return 0;
}


//Sushant
