#include<iostream>

using namespace std;

class Rectangle
{
public:
    static int counter;
    Rectangle()
    {
        counter++;
        cout << "I am at Constructor\n";
    }
    ~Rectangle()
    {
        counter--;
       cout << "I am at Destructor\n";
    }

};

int Rectangle :: counter = 0;

int main()
{
    Rectangle r1,r2;
    Rectangle *p = new Rectangle;
    cout << Rectangle :: counter << endl;

    delete p;
    cout << Rectangle :: counter << endl;
    return 0;
}