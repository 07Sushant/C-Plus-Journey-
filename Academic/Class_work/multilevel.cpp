#include<iostream>
using namespace std;

class Base1
{
  public:
 ~Base1() {cout<<"Base1's destructor"<<endl;}
};

class Base2
{
 public:
 ~Base2() {cout<<"Base2's destructor"<<endl;}
};

class Derived : public Base2,public Base1
{
 public:
 ~Derived() {cout<<"Derived's destructor"<<endl;}
};

int main()
{
 Derived d;
 return 0;
}
