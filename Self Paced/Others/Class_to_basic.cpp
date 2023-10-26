#include<iostream>
using namespace std;

    
class student
{
    private:
        int rollno;
        float fees;
    
    public:
        student(int a, float m)
        {
            rollno = a;
            fees = m;
        }

        operator int() //keyboard used
        {
            return (rollno);
        }

        operator float()
        {
            return (fees);
        }
};


void main()
{
    int j;
    float f;

    student st(5,4200.06);

    j=st;

    f=st;

    cout<<"\nvlaue of j: "<<j<<"\n";
    cout<<"\nvlaue of f: "<<j<<"\n";

    getch();

}