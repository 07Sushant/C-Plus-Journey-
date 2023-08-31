#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
bool isConsonant(char c) {
c = tolower(c);
return isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
}
int main() {
char** sentences = new char*[1];
sentences[0] = new char[1000];
cin.getline(sentences[0], 1000);
int consonantCount = 0;
for (int i = 0; sentences[0][i] != '\0'; ++i) {
if (isConsonant(sentences[0][i])) {
++consonantCount;
}
    }
cout << consonantCount << endl;
delete[] sentences[0];
delete[] sentences;
return 0;
}

//Sushant