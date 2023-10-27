#include<iostream>
#include<string.h>
using namespace std;

class department
{
    public:
    char name[20];
        department()
        {
            strcpy(name,"abc");
        }
        ~department()
        {   
            cout<<"department class destroyed"<<endl;
        }
};


class professor
{
    int pid;
    int exp;
    department *d;
    public:


    professor(int a, int b, department *d)
    {
        pid=a;
        exp=b;
        this->d=d;
    }
    ~professor()
    {
        cout<<"professor class destroyed."<<endl;
    }
};

main()
{
    department D;
    {
        professor p(1,2,&D);
    }
    cout<<"At this point professor gets deleted but department is still there"<<endl;
}

