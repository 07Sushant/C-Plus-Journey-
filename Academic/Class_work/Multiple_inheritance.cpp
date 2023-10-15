#include<iostream>
using namespace std;

class M
{
    protected:
    int m;
    public:
        void get_m(int);
};


class N
{
    protected:
    int n;
    public:
        void get_n(int);
};

class P:public M, public N{
    public:
    void display(void);
};

void M::get_m(int x)
{m=x;}


void N::get_n(int y)
{n=y;}

void P::display(void)
{
    cout<<"m: "<<m<<"\n";
    cout<<"n: "<<n<<"\n";
    cout<<"m*n: = "<<m*n<<"\n";
}

int main()
{
    P p;
    p.get_m(10);
    p.get_n(10);
    p.display();

    return 0;


}


