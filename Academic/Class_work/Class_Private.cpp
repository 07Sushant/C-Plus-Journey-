#include<iostream>
#include<string.h>
using namespace std;

class student 
{
    private:
    int roll_no;
    protected:
    char section[10];
    
    public:
    void get_rno()
    {
        cout<<"\n Enter the roll number: ";
        cin >> roll_no;
    }

    void show_rno()
    {
        cout <<"\n Roll no:"<<roll_no;
    }
};


class result : private student
{
    private :
    float feez;
    public:
    void get_data()
    {
        get_rno();
        cout
    }
}



