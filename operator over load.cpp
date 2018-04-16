#include <iostream>
#include <vector>

using namespace std;

class Subject
{
    int test_1;
    int test_2;
    int exam;
    int total;
public:

    Subject()
    {
        test_1 = 0;
        test_2 = 0;
        exam = 0;
        total = 0;
    }

    Subject(int t1,int t2,int exam)
    {
        test_1 = t1;
        test_2 = t2;
        this->exam = exam;
    }

    Subject operator+(Subject obj)
    {
        Subject temp;
        temp.test_1 = test_1 + obj.test_1;
        temp.test_2 = test_2 + obj.test_2;
        temp.exam = exam + obj.exam;
        return temp;
    }

    int display()
    {
        total = test_1+test_2+exam;
        return total;
    }

};

class Point
{
    int mark;
public:
    Point()
    {
        mark =0;
    }

    Point(int m)
    {
        mark = m;
    }

    void operator+=(int value)
    {
        mark+=value;
    }

    int display()
    {
        return mark;
    }

    friend void operator-=(Point &obj,int value);

};

void operator-=(Point &obj,int value)
{
   obj.mark-=value;
}

int main()
{
    Subject english(15,25,30);
    Subject maths(20,15,25);
    Subject geography(30,28,35);
    Subject physics(15,15,38);
    Subject score = geography + english+maths+physics;

    cout << "Total score: " << score.display() << endl;

    cout << endl;

    Point a;

    for(int i=0;i<5;i++)
    {
        a+=i;
    }

    cout << "point: " << a.display() << endl;

    for(int i=0;i<5;i++)
    {
        a-=i;
    }

    cout << "point: " << a.display() << endl;
}
