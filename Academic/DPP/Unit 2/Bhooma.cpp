#include <iostream>
#include <stack>
using namespace std;

bool isValidMathExpression(const char* expression) {
    stack<char> brackets;

    for (int i = 0; expression[i] != '\0'; ++i) {
        if (expression[i] == '(') {
            brackets.push(expression[i]);
        } else if (expression[i] == ')') {
            if (brackets.empty() || brackets.top() != '(') {
                return false;
            }
            brackets.pop();
        } else if (expression[i] == '{' || expression[i] == '}') {
            return false;
        }
    }

    return brackets.empty();
}

int main() {
    char expression[1000];
    cin.getline(expression, 1000);
    if (isValidMathExpression(expression)) {
        cout << "Valid mathematical expression." << endl;
    } else {
        cout << "Invalid mathematical expression." << endl;
    }
    return 0;
}
//Sushant
