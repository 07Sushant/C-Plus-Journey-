// Derived Class name : Base class Name


#include<iostream>
using namespace std;


class one
{   protected:
    int x,y,z;
    public:
    void in(){
        cout <<"Enter the data";
        cin>>x>>y;

    }
};





class two : public one
{
    int z;
    public:
    void take()
    {
        cout<<"Enter ";
        cin >>z;
    }

    int dis()
    {
        cout <<x+y+z;
    }
};





int main()
{
    two t1;
    t1.in();
    t1.take();
    t1.dis();

}