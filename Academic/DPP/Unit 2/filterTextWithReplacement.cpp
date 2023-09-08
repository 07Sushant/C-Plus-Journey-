#include <iostream>
#include <string>

using namespace std;

string filterTextWithReplacement(string text, string bannedWords) {
    size_t pos = 0;
    while ((pos = text.find(bannedWords, pos)) != string::npos) {
        text.replace(pos, bannedWords.length(), "-removed-");
        pos += 9; 
    }
    return text;
}

int main() {
    string text, bannedWords;
    
    getline(cin, text);
    getline(cin, bannedWords);
    
    string filteredText = filterTextWithReplacement(text, bannedWords);
    
    cout << filteredText << endl;
    
    return 0;
}


//Sushant