#include<iostream>
using namespace std;
int main()
{
    int x = 4;
    void* ptr;
    ptr = &x;
    cout<<"Vlaue odf x:"<<*ptr;
}


