#include <iostream>
#include <map>

std::map<char, std::string> morseCodeMap = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."}, {' ', "/"}
};

std::string convertToMorseCode(const std::string& sentence) {
    std::string morseCode;
    for (char ch : sentence) {
        ch = std::toupper(ch); 
        if (morseCodeMap.find(ch) != morseCodeMap.end()) {
            morseCode += morseCodeMap[ch] + " ";
        }
    }
    return morseCode;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string morseCode = convertToMorseCode(sentence);

    std::cout<< morseCode << std::endl;

    return 0;
}
//Sushant