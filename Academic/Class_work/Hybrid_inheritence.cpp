#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }

    void put_number()
    {
        cout << "Roll No: " << roll_number << "\n";
    }
};

class test : public student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }

    void put_marks()
    {
        cout << "\nPart1 = " << part1 << "\nPart2 = " << part2 << "\n";
    }
};

class sports
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }

    void put_score()
    {
        cout << "Sports: " << score << "\n\n";
    }
};

class result : public test, public sports
{
    float total;

public:
    void display()
    {
        total = part1 + part2 + score;
        put_number();
        put_marks();
        put_score();
        cout << "Total Score: " << total << "\n";
    }
};

int main()
{
    result r;
    r.get_number(1);
    r.get_marks(90.5, 85.0);
    r.get_score(78.5);
    r.display();
    return 0;
}
