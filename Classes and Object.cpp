#include <bits/stdc++.h>
using namespace std;

class ABC;
class XYZ
{
	int x;
public:
	void setData(int a)
	{
		x = a;
	}
	friend void maxx( XYZ ob1 , ABC ob2);

};

class ABC
{
	int x;
public:
	void setData(int a)
	{
		x = a;
	}
	friend void maxx( XYZ ob1 , ABC ob2);

};

void maxx( XYZ ob1 , ABC ob2 )
{
	if( ob1.x > ob2.x )
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}

int main()
{
	XYZ a;
	a.setData(10);
	ABC b;
	b.setData(9);

	maxx(a,b);


	return 0;
}