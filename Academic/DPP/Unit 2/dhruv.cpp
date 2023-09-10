#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int numSubjects;
    vector<double> marks;

public:
    void inputDetails() {
        cin.ignore(); // Consume the newline character left in the input buffer
        getline(cin, name);
        cin >> numSubjects;
        marks.resize(numSubjects);
        for (int i = 0; i < numSubjects; ++i) {
            cin >> marks[i];
        }
    }

    double calculateAverage() {
        double sum = 0.0;
        for (int i = 0; i < numSubjects; ++i) {
            sum += marks[i];
        }
        return sum / numSubjects;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Average marks: " << fixed << setprecision(2) << calculateAverage() << endl;
    }
};

int main() {
    int numStudents;
    cin >> numStudents;
    vector<Student> students(numStudents);

    cout << "Student Details:" << endl; // Print the header only once

    for (int i = 0; i < numStudents; ++i) {
        students[i].inputDetails();
        students[i].displayDetails();
    }

    return 0;
}
