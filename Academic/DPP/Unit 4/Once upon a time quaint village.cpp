
#include <iostream>
#include <string>

class CustomString {
private:
    std::string str;

public:
    CustomString(const std::string& s) : str(s) {}

    CustomString operator++(int) {
        CustomString temp(*this);
        if (!str.empty()) {
            if (isalpha(str[0])) {
                str[0] = std::toupper(str[0]);
            }
        }
        return temp;
    }

    std::string getOriginalString() const {
        return str;
    }
};

int main() {
    std::string input;
    std::getline(std::cin, input);

    CustomString customStr(input);

    std::cout << "Original string: " << customStr.getOriginalString() << std::endl;
    customStr++;

    std::cout << "Modified string: " << customStr.getOriginalString() << std::endl;

    return 0;
}