// You are using GCC
#include <iostream>
#include <string>
using namespace std;

string generateAcronym(const string& phrase) {
    string acronym = "";

    acronym += toupper(phrase[0]);

    for (int i = 0; i < phrase.length(); i++) {
        if (phrase[i] == ' ') {
            acronym += toupper(phrase[i + 1]);
        }
    }

    return acronym;
}

int main() {
    string input;
    getline(cin, input);

    string acronym = generateAcronym(input);
    
    cout << "" << acronym << endl;

    return 0;
}

//Sushant