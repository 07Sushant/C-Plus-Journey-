#include <iostream>
using namespace std;
class student 
{
    protected:
        int roll_no;
    public:
        void get_no(int);
        void put_no(void);
};

void student::get_no(int a)

    {roll_no=a;}
    void student::put_no(int a);

    void student::put_no()
    {cout<<"Roll Number is: "<<roll_no;}


    class test : public student{
    protected:
    float sub1,sub2;
    
    public:
    void get_marks(float, float);
    void put_marks(void);
    };


    void test:: get_marks(floatx, float y)
    {
        sub1 = x ; sub2 = y;
    }


void test::put_marks()
{
    cout<<"Marks in sun 1 : "<<sub1;
    cout<<"Marks in sun 2 : "<<sub2;
}

class result: public test
{float total;

public:
}






void result::display(void)
{
    Total = sub1+sub2;
    put_no();
    put_marks();
    cout<<"total = "<<Total;

}

int mai()
{
    Result student1;
    student.get_no(102);
    student.get_marks(80.0,98.5);
    student1.display();
    return 0;


}
