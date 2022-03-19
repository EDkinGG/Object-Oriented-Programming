#include<bits/stdc++.h>
using namespace std;

class xy_axis
{
protected:
	int x,y;
public:
	xy_axis()
	{

	}
	xy_axis( int a ,int b )
	{
		x = a;
		y = b;
	}

};

class z_axis:public xy_axis
{
	int z;
public:
	z_axis()
	{

	}
	z_axis( int a, int b , int c ):xy_axis(a,b)
	{
		z = c;
	}
	double distance( z_axis );
};
double z_axis::distance( z_axis p2 )
{
	double xx,yy,zz,result;
	xx = (double)this->x - (double)p2.x;
	yy = (double)this->y - (double)p2.y;
	zz = (double)this->z - (double)p2.z;
	result = sqrt(xx*xx + yy*yy + zz*zz );
	return result;
}


int main()
{
	z_axis p1(7,4,3),p2(17,6,2);

	cout<<p1.distance(p2)<<endl;
}