#include <iostream>
#include <string>

class NumToText {
public:
    int start;
    int end;

    NumToText(int start, int end) {
        this->start = start;
        this->end = end;
    }

    std::string convertToText(int num) {
        std::string numToText[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        std::string text;
        while (num > 0) {
            int digit = num % 10;
            text = numToText[digit] + " " + text;
            num /= 10;
        }
        return text.empty() ? "Zero" : text;  
    }

    void printNumbersInRange() {
        for (int num = start; num <= end; ++num) {
            if (num >= 0) {
                std::string text = convertToText(num);
                std::cout << "Number - " << num << "; Text - " << text << std::endl;
            }
        }
    }
};

int main() {
    int start_index, end_index;
    std::cin >> start_index >> end_index;

    NumToText numToTextConverter(start_index, end_index);
    numToTextConverter.printNumbersInRange();

    return 0;
}
