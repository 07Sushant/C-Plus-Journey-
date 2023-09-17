
#include <iostream>
#include <string>

class GradeBook {
private:
    std::string courseName;
    std::string instructorName;

public:
    void setCourseName(const std::string &name) {
        courseName = name;
    }

    void setInstructorName(const std::string &name) {
        instructorName = name;
    }

    void displayMessage() const {
        std::cout << "Welcome to the grade book for " << courseName << "!" << std::endl;
        std::cout << "This course is presented by: " << instructorName << std::endl;
    }
};

int main() {
    GradeBook gradeBook;
    std::string courseName, instructorName;

    std::getline(std::cin, courseName);        
    std::getline(std::cin, instructorName);  

    gradeBook.setCourseName(courseName);
    gradeBook.setInstructorName(instructorName);

    gradeBook.displayMessage();

    return 0;
}