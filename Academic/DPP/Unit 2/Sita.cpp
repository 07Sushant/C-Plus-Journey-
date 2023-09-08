// You are using GCC
#include <iostream>
using namespace std;

class Student {
public:
    int rollno;
    int mark1;
    int mark2;
    int mark3;
};

int main() {
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].rollno >> students[i].mark1 >> students[i].mark2 >> students[i].mark3;
    }

    for (int i = 0; i < n; i++) {
        int totalMarks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        cout << totalMarks << endl;
    }

    cout << endl;

    for (int subject = 1; subject <= 3; subject++) {
        int highestMark = -1;
        int studentRoll = -1;

        for (int i = 0; i < n; i++) {
            if (subject == 1 && students[i].mark1 > highestMark) {
                highestMark = students[i].mark1;
                studentRoll = students[i].rollno;
            } else if (subject == 2 && students[i].mark2 > highestMark) {
                highestMark = students[i].mark2;
                studentRoll = students[i].rollno;
            } else if (subject == 3 && students[i].mark3 > highestMark) {
                highestMark = students[i].mark3;
                studentRoll = students[i].rollno;
            }
        }

        cout << studentRoll << " " << highestMark << endl;
    }

    cout << endl;

    int highestTotalMarks = -1;
    int studentRollWithHighestTotal = -1;

    for (int i = 0; i < n; i++) {
        int totalMarks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        if (totalMarks > highestTotalMarks) {
            highestTotalMarks = totalMarks;
            studentRollWithHighestTotal = students[i].rollno;
        }
    }

    cout << studentRollWithHighestTotal << " " << highestTotalMarks << endl;

return 0;
}

//SUshant