#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"\nCalling default base class constructor";
    }

    ~A()
    {
        cout<<"\nCalling base class destructor";
    }
};

class B:public A
{
    public:
    B()
    {
        cout<<"\nCalling default derives class constructor";
    }

    ~B()
    {
        cout<<"\nCalling derived class destructor";
    }
};

int main()
{
    B obj1;
    return 0;
}



