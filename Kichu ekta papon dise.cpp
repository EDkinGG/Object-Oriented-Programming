#include<iostream>
#include<stdlib.h>
using namespace std;

class student
{
protected:
    int roll;
    double cgpa;
public:
    student()
    {
        roll =1;
    }
    student(int x)
    {
        roll=x;
    }
    void showroll()
    {
        cout<<"roll "<<roll<<endl;
    }


};


class test:public student
{
protected:
    int sub1;
    int sub2;
public:
    test():student()
    {
        sub1 = 0;
        sub2 = 0;
    }
    test(int r, int y,int x):student(x)
    {
        sub1=r;
        sub2=y;
    }
    void showmark()
    {
        cout<<"sub1="<<sub1<<endl;
        cout<<"sub2="<<sub2<<endl;
    }

};
class result:public test
{
    int total;
public:
    result(int a,int b,int c):test(a,b,c)
    {
        total=sub1+sub2;
        cout<<"total: "<<total<<endl;
    }
};
int main()
{
    result r(300,240,89);
    r.showroll();
    r.showmark();
}