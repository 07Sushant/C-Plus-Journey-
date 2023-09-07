// You are using GCC
#include<iostream>
using namespace std;

int main()
{
int a=10;
int *p;
int **pp;
p=&a;
pp=&p;
cout<<"Address of a:"<<p<<endl;
cout<<"Address of p:"<<pp<<endl;
cout<<"Value stored at p:"<<*p<<endl;
cout<<"Value stored at pp:"<<*pp<<endl;
cout<<"Value stored at pp:"<<**pp<<endl;
  return 0;
}