#include <iostream>
#include<fstream>
using namespace std;
int main ()
{
    char s[3];
    ifstream inf("result.txt");
    inf >>s;
    inf.close();
    cout <<s;



}