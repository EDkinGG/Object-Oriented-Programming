#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout<<" 1 ";
    }
    A(A &obj )
    {
        cout<<" 2 ";
    }
};

class B : virtual A
{
public:
    B()
    {
        cout<<" 3 ";
    }
    B(B &obj )
    {
        cout<<" 4 ";
    }
};

class C : virtual A
{
public:
    C()
    {
        cout<<" 5 ";
    }
    C(C &obj )
    {
        cout<<" 6 ";
    }
};

class D : C,B
{
public:
    D()
    {
        cout<<" 7 ";
    }
    D(D &obj )
    {
        cout<<" 8 ";
    }
};


int main()
{
    D d1;
    cout<<endl;
    D d(d1);
    
    return 0;
}