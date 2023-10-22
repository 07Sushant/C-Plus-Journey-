#include <iostream>
using namespace std;


class A
{
    public:
    void show()
    {
        cout<<"\n Base Class A";
    }
};

class B:public A{
    public:
    void show()
    {
        cout<<"\n Derived Class B";
    }
};




int main()
{
    B obj1;
    obj1.show();
    return 0;

}


