#include<iostream>
using namespace std;


class A 
{   public:
    int x, y;
    public:
    A(int r, int s)
    {
        x=r;
        y=s;
        cout<<"\n Calling base classs constrictor: "<<x<<""<<y;
    }

    ~A()
    {
        cout<<"\nCalling base class destructor";
    }
};



class B: public A
{
    int l, m;
    public:
    B(int p, int q, int r, int s):A(r,s)
    {
        l=p;
        m=q;
        cout<<"\n Calling derived classs constrictor: "<<x<<""<<y;
    }

    ~B()
    {
        cout<<"\nCalling derived class destructor";
    }
};

class C: public B
{
    int n, m;
    public:
    C(int u, int v, int p, int q, int r, int s):B(p,q,r,s)
    {
        n=u;
        m=v;
        cout<<"\n Calling derived classs constrictor: "<<n<<""<<m;
    }

    ~C()
    {
        cout<<"\nCalling derived class destructor";
    }
};



int main ()
{
   C obj1(1,2,3,4,5,6);
    return 0;
}



