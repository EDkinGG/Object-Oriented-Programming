#include<bits/stdc++.h>
using namespace std;

class recta;
class polarX
{
public:
	double ang,rad;//angle and radius of the point.
	void getP(void);
	void toRect(void);
	void displayP(void);
};

class recta
{
public:
	double x,y;
	void getR(void);
	void toPol(void);
	void displayR(void);
};

void polarX::getP(void)
{
	cout<<"Enter the radius: ";
	cin>>rad;
	cout<<"Enter the angle: ";
	cin>>ang;
}

void recta::getR(void)
{
	cout<<"Enter length on x-axis: ";
	cin>>x;
	cout<<"Enter length on y-axis: ";
	cin>>y;
}

void polarX::toRect(void)
{
	recta r1;
	r1.x = rad*cos(ang*3.14159/180);
	r1.y = rad*sin(ang*3.14159/180);
	r1.displayR();
}

void recta::toPol(void)
{
	polarX p1;
	p1.ang = atan(y/x)*180/3.14159;
	p1.rad = sqrt(x*x+y*y);
	p1.displayP();
}

void polarX::displayP(void)
{
	cout<<"Angle = "<<ang<<" Radius = "<<rad<<"\n";
}

void recta::displayR(void)
{
	cout<<"X = "<<x<<" Y = "<<y<<"\n";
}

int main()
{
	bool b = true;
	polarX p;
	recta r;
	while(b)
	{
		int ch;
		cout<<"1.Polar to Rectangle form\n2.Rectangle to Polar form.\n3.Exit\n";
		cout<<"Enter your choice..\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
			p.getP();
			p.toRect();
			break;

			case 2:
			r.getR();
			r.toPol();
			break;

			case 3:
			b = false;
		}
	}
	return(0);
}