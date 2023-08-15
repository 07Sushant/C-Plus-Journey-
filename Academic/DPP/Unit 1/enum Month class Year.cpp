#include <iostream>
using namespace std;

class Year
{
public:
    enum Month
    {
        JANUARY = 1,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };
};

int main()
{
    int n;
    cin >> n;

    if (n >= Year::JANUARY && n <= Year::DECEMBER)
    {
        Year::Month month = static_cast<Year::Month>(n);
        switch (month)
        {
        case Year::JANUARY:
            cout << "Month: JANUARY";
            break;
        case Year::FEBRUARY:
            cout << "Month: FEBRUARY";
            break;
        case Year::MARCH:
            cout << "Month: MARCH";
            break;
        case Year::APRIL:
            cout << "Month: APRIL";
            break;
        case Year::MAY:
            cout << "Month: MAY";
            break;
        case Year::JUNE:
            cout << "Month: JUNE";
            break;
        case Year::JULY:
            cout << "Month: JULY";
            break;
        case Year::AUGUST:
            cout << "Month: AUGUST";
            break;
        case Year::SEPTEMBER:
            cout << "Month: SEPTEMBER";
            break;
        case Year::OCTOBER:
            cout << "Month: OCTOBER";
            break;
        case Year::NOVEMBER:
            cout << "Month: NOVEMBER";
            break;
        case Year::DECEMBER:
            cout << "Month: DECEMBER";
            break;
        }
    }
    else
    {
        cout << "Invalid month input";
    }

    return 0;
}