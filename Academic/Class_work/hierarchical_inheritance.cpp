#include<iostream>
using namespace std;
class M
{
    protected:
    int x;
    public:
    void set(int a)
    {
        x=a;
    }
};

class N: public M{
    public:
    void display()
    {
        cout<<"\nx: " <<x<<"accessed in Derived class N";
    }
};

class O:public M{

    public:
    void display()
    {
        cout<<"\nx:--"<<x<<"accessed in Derived Class O";
    }
};


int main()
{
    N obj1;
    O obj2;
    obj1.set(12);
    obj1.display();
    obj2.set(19);
    obj2.display();

    return 0;




}