#include<iostream>
#include<string.h>
using namespace std;

class birthday
{
    int date, month, year;
    public:
    birthday(int d, int m, int y)
    {
        date=d;
        month=m;
        year=y;
        cout<<"Birthday Constructor"<<endl;
    }
    ~birthday()
    {
        cout<<"Birthday Destrictor"<<endl;
    }

    void display()
    {
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

class person{
 string name;
 birthday b;
 public:
 person(string n, int d, int m, int y):b(d,m,y)
 {
  name=n;
  cout<<"Person constructor"<<endl;
 }

 void show()
 {
  b.display(); // Call the display method on the birthday object
  cout<<name;
 }

 ~person()
 {
  cout<<"Person Destructor"<<endl;
 }
};


int main()
{
    person ob("ab",12,10,2023);
    ob.show();
    return 0;
}