// You are using GCC
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int *p;
    p=new int;
    *p=100;
    cout<<*p<<endl;
    delete p;
    cout<<*p;
    return 0;
}