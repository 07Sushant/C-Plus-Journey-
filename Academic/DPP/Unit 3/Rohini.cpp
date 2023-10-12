// You are using GCC
#include <iostream>
#include <string>

using namespace std;

class NumToText {
private:
    int num;
    string text;

    string getTextForBaseData(int num) {
        switch (num) {
            case 0: return "Zero";
            case 1: return "One";
            case 2: return "Two";
            case 3: return "Three";
            case 4: return "Four";
            case 5: return "Five";
            case 6: return "Six";
            case 7: return "Seven";
            case 8: return "Eight";
            case 9: return "Nine";
            default: return "";
        }
    }

public:
    NumToText(int n) {
        num = n;
        if (num >= 0 && num <= 9) {
            text = getTextForBaseData(num);
        }
        else {
            text = "";
            string numStr = to_string(num);
            for (char digit : numStr) {
                text += getTextForBaseData(digit - '0') + " ";
            }
            text.pop_back(); // Remove the trailing space
        }
    }

    void display() {
        cout << "Number - " << num << "; Text - " << text << endl;
    }
};

int main() {
    int start, end;
    cin >> start >> end;

    if (start < 0) {
        start = 0;
    }

    for (int i = start; i <= end; i++) {
        NumToText obj(i);
        obj.display();
    }

    return 0;
}

