#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
	int length;
	int width;
public:
	Rectangle() //default constructor
	{
		length = 2;
		width = 3;
		cout<<"This is default constructor \n";
	}
	Rectangle( int a , int b ) //parameterized constructor
	{
		length = a;
		width = b;
		cout<<"I am here to initialize\n";
	}
	Rectangle( Rectangle &r ) //copy constructor
	{
		length = r.length;
		width = r.width;
		cout<<"Copy Constructor\n";
	}

	int getPerimeter()
	{
		return 2*(length+width);
	}
};

int main()
{
	int aa = 12;
	Rectangle r1, r2(aa,15);//implicit call
	Rectangle r3 = Rectangle(11,13);//explicit call

	Rectangle r4 = Rectangle(r2);//copy constructor call
	Rectangle r5 = r3;//copy constructor copy
	//r5.Rectangle(r3); ->>invalid style

	cout<<"r1 \n"<<r1.getPerimeter()<<"\n"<<endl;
	cout<<"r2 \n"<<r2.getPerimeter()<<"\n"<<endl;
	cout<<"r3 \n"<<r3.getPerimeter()<<"\n"<<endl;
	cout<<"r4 \n"<<r4.getPerimeter()<<"\n"<<endl;
	cout<<"r5 \n"<<r5.getPerimeter()<<"\n"<<endl;

	return 0;
}

//Topic covered
//