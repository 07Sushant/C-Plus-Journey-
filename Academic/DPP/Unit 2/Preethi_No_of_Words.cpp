#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
    char str[1000];
    int i, len, count = 0;

    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    cout<< count + 1;

    return 0;
}

//adil
