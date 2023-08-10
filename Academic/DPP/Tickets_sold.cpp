#include <iostream>
using namespace std;
int main()
{
    int x,y,A,C,S;
    cin >>x>>y;
    C=(y-(5*x))/13;
    A=C+x;
    S=2*C;
    
    cout << "Number of children tickets sold: " << C << endl;
    cout << "Number of adult tickets sold: " << A<< endl;
    cout << "Number of senior tickets sold: " << S<<endl;
    
    
    return 0;
}

//Sushant