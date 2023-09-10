#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> extract(const string& paragraph, const string& keyword) {
    vector<string> extractedSentences;
    size_t startPos = 0;
    
    while (true) {
        size_t periodPos = paragraph.find('.', startPos);
        
        if (periodPos == string::npos) {
            break;
        }
        
        string sentence = paragraph.substr(startPos, periodPos - startPos + 1);
        
        startPos = periodPos + 1;
        
        if (sentence.find(keyword) != string::npos) {
            extractedSentences.push_back(sentence);
        }
    }
    
    return extractedSentences;
}

int main() {
    string paragraph;
    string keyword;
    
    getline(cin, paragraph);
    
    getline(cin, keyword);
    
    vector<string> result = extract(paragraph, keyword);
    
    cout << result.size() << endl;
    
    for (const string& sentence : result) {
        cout << sentence << " ";
    }
    
    cout << endl;
    
    return 0;
}
