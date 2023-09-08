// You are using GCC
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    string result = "";
    for(char ch : str)
    {
        if (result.find(ch) == string::npos)
        {
            result += ch;
        }
    }
    
    cout << result << endl;
    return 0;
}


//Sushant