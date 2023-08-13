#include<iostream>
using namespace std;


class student
{
    int id;
    char name[20];
    int reg;
public:
    void readdata();
    void showdata();


};


// this fucntion belog to this class use scope to acces the defination 
void student::readdata()
{
    cout <<"Enter the ID: " <<endl;
    cin >>id;
    cout <<"Enter the Name: " <<endl;
    cin >>name;
    cout <<"Enter the Reg_No: " <<endl;
    cin >>reg;

}


void student::showdata()
{
    cout<<"The ID: "<<id<<endl;
    cout<<"The Name: "<<name<<endl;
    cout<<"The Reg : "<<reg<<endl;

}


int main()
{
    student s;
    s.readdata();
    s.showdata();
    return 0;
}