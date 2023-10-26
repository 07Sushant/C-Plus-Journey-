#include <iostream>

int function(int a, int b, int c, int d);
int function(int a, int b, int c, int d)
{
    int max = a;
    
    if(b>max)
    {
        max = b;
    }

    if (c>max)
    {
        max = c;
    }

    if (d>max)
    {
        max = d;
    }

    return max;
}


int main ()
{
    int a;
    int b;
    int c; 
    int d;
    std:: cin >> a >> b >> c >> d;

    int maximum = function(a,b,c,d);
    std :: cout << maximum << std:: endl;
    return 0;

}