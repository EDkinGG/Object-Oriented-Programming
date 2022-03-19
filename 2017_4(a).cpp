#include<bits/stdc++.h>
using namespace std;

class Person
{
    string name;
public:
    Person() {}
    Person(string s): name(s) {}
    virtual void info()
    {
        cout<<"Name : "<<this->name<<endl;
    }
};

class Student:public Person
{
    int matric_number;
public:
    Student() {}
    Student(string name1, int x):matric_number(x), Person(name1) {}

    void info()
    {
        Person::info();
        cout<<"Matric Number : "<<this->matric_number<<endl;
    }

};

class MasterStudent:public Student
{
    string subject;
public:
    MasterStudent(){}
    MasterStudent(string name2, int metric, string s):subject(s), Student(name2, metric){}
    void info()
    {
        Student::info();
        cout<<"Subject : "<<subject<<endl;
    }
};

int main()
{
    Person B("Rashed");
    Student DS("Tamim", 101 );
    MasterStudent MSD("Wali", 34, "CSE");
    Person *bptr;// Base Class Person er pointer bptr nilam!

    bptr = &B;
    bptr->info();
    cout<<endl;
    bptr = &DS;
    bptr->info();
    cout<<endl;
    bptr = &MSD;
    bptr->info();
    cout<<endl;
    return 0;
}
