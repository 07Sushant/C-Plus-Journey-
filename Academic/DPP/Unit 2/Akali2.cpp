#include <iostream>
#include <string>

using namespace std;

int main() {
    string initialString, appendChars, insertChars;
    int insertPosition, eraseStart, eraseLength;

    cin >> initialString;
    cin >> appendChars;
    cin >> insertChars;
    cin >> insertPosition;
    cin >> eraseStart;
    cin >> eraseLength;

    initialString += appendChars;
    cout << "Modified string after append: " << initialString << endl;

    if (insertPosition >= 0 && insertPosition <= initialString.length()) {
        initialString.insert(insertPosition, insertChars);
        cout << "Modified string after insert: " << initialString << endl;
    } else {
        cout << "Insert position is out of range." << endl;
    }

    if (eraseStart >= 0 && eraseStart < initialString.length()) {
        initialString.erase(eraseStart, eraseLength);
        cout << "Modified string after erase: " << initialString << endl;
    } else {
        cout << "Erase position is out of range." << endl;
    }

    return 0;
}
