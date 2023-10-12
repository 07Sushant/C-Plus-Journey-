#include <iostream>
#include<iomanip>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {
        cout << "Person constructor called: " << name << endl;
    }

    virtual ~Person() {
        cout << "Person destructor called: " << name << endl;
    }
};

class Student : public Person {
public:
    Student(const string& n, int a) : Person(n, a) {
        cout << "Student constructor called: " << name << endl;
    }

    ~Student() {
        cout << "Student destructor called: " << name << endl;
    }
};

class Teacher : public Person {
public:
    Teacher(const string& n, int a) : Person(n, a) {
        cout << "Teacher constructor called: " << name << endl;
    }

    ~Teacher() {
        cout << "Teacher destructor called: " << name << endl;
    }
};

int main() {
    int totalStudentAge = 0;
    int totalTeacherAge = 0;
    int numStudents = 0;
    int numTeachers = 0;
    string name;
    int age;

    while (true) {
        cin >> name;
        if (name == "q")
            break;
        cin >> age;
        Student student(name, age);
        totalStudentAge += age;
        numStudents++;
    }

    while (true) {
        cin >> name;
        if (name == "q")
            break;
        cin >> age;
        Teacher teacher(name, age);
        totalTeacherAge += age;
        numTeachers++;
    }

  if (numStudents > 0) {
    double avgStudentAge = static_cast<double>(totalStudentAge) / numStudents;
    cout << "Average Student Age: ";
    if (avgStudentAge == static_cast<int>(avgStudentAge)) {
        cout << fixed << setprecision(0) << avgStudentAge << endl;
    } else {
        cout << fixed << setprecision(1) << avgStudentAge << endl;
    }
}

if (numTeachers > 0) {
    double avgTeacherAge = static_cast<double>(totalTeacherAge) / numTeachers;
    cout << "Average Teacher Age: " << fixed << setprecision(0) << avgTeacherAge << endl;
}



    return 0;
}