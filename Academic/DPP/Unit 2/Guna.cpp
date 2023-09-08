// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    int marks[5];
    int totalMarks;

    void calculateTotalMarks() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
    }
};

int main() {
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name;
        cin >> students[i].rollNumber;
        for (int j = 0; j < 5; j++) {
            cin >> students[i].marks[j];
        }
        students[i].calculateTotalMarks();
    }

    cout << "Student Report Cards:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Total Marks: " << students[i].totalMarks << endl;
    }

    return 0;
}



//Sushant