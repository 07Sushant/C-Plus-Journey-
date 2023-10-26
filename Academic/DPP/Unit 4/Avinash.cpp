
#include <iostream>
using namespace std;

class student
{
public:
    int studentID;

    student(int id) : studentID(id) {}
};

class testmarks : public virtual student
{
public:
    float mark1;

    testmarks(int id, float m1) : student(id), mark1(m1)
    {
        if (mark1 < 0 || mark1 > 100)
        {
            cout << "Invalid mark 1. Only enter values between 0 and 100" << endl;
            mark1 = 0;
        }
    }
};

class sportsmarks : public virtual student
{
public:
    float mark2;

    sportsmarks(int id, float m2) : student(id), mark2(m2)
    {
        if (mark2 < 0 || mark2 > 100)
        {
            cout << "Invalid mark 2. Only enter values between 0 and 100" << endl;
            mark2 = 0;
        }
    }
};

class result : public testmarks, public sportsmarks
{
public:
    float score;

    result(int id, float m1, float m2, float s) : student(id), testmarks(id, m1), sportsmarks(id, m2), score(s)
    {
        if (score < 0 || score > 100)
        {
            cout << "Invalid score. Only enter values between 0 and 100" << endl;
            score = 0;
        }
    }

    float totalScore()
    {
        return mark1 + mark2 + score;
    }
};

int main()
{
    int sid;
    cin >> sid;
    float mark1, mark2, score;
    cin >> mark1 >> mark2 >> score;

    result s1(sid, mark1, mark2, score);

    cout << "ID: " << s1.studentID << endl;
    cout << "Mark 1: " << s1.mark1 << endl;
    cout << "Mark 2: " << s1.mark2 << endl;
    cout << "Score: " << s1.score << endl;
    cout << "Total score: " << s1.totalScore() << endl;

    return 0;
}

//Sushant