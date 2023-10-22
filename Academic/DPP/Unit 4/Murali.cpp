#include <iostream>
using namespace std;

class Base {
public:
    virtual int game(char letter1, char letter2) {
        return 0;
    }
};

class Derived : public Base {
public:
    int game(char letter1, char letter2) override {
        int score = 0;

        if (isupper(letter1)) {
            score += 10;
        } else {
            score -= 5;
        }

        if (isupper(letter2)) {
            score += 10;
        } else {
            score -= 5;
        }

        return score;
    }
};

int main() {
    char letter1, letter2;
    cin >> letter1 >> letter2;

    Derived d;
    int totalScore = d.game(letter1, letter2);

    cout << "Score: " << totalScore << endl;

    return 0;
}
