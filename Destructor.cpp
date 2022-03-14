#include<bits/stdc++.h>

using namespace std;

class Rectangle
{
	int length;
	int width;
public:
	Rectangle()
	{
		cout<<"Default Constructor"<<endl;
	}
	~Rectangle()
	{
		cout<<"Destructor Called"<<endl;
	}
};

int main()
{
	Rectangle r1,r2;
	Rectangle *p = new Rectangle;
	delete p;
	{
		Rectangle r3;
	}
	Rectangle r4;
	return 0;
}
