#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream of("result.txt");
    of<<"Sushant";
    of.close();
    cout <<"data saved\n";
}