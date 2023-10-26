#include <iostream>
using namespace std;

class data
{
    int x;
    int y;
    int z;

public:
    void take()
    {
        cout << "Enter the data: ";
        cin >> x >> y >> z;
    }

    void display()
    {
        cout << "Entered data is: " << x << endl << y << endl << z << endl;
    }

    // Declare the operator- as a member function
    data operator-()
    {
        data temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }
};

int main()
{
    data d1;
    d1.take();

    // Use the unary minus operator to negate the values of d1
    data d2 = -d1;

    cout << "Negated data:" << endl;
    d2.display();

    return 0;
}




