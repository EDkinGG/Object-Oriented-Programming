#include<bits/stdc++.h>

using namespace std;

class DB;
class DM
{
	double meter;
	double cm;
public:
	void setData( double a = 0 , double b = 0 )
	{
		meter = a;
		cm = b;
	}
	void display()
	{
		cout<<"the distance is \n";
		cout<<"meter = "<<meter<<" centimeter = "<<cm<<endl;
	}
	friend DB add( DM ,DB);
};

class DB
{
	double feet;
	double inch;
public:
	void setData( double a = 0 , double b = 0 )
	{
		feet = a;
		inch = b;
	}
	void display()
	{
		cout<<"the distance is \n";
		cout<<"feet = "<<feet<<" inch = "<<inch<<endl;
	}
	friend DB add( DM ,DB);
};

DB add(DM d1 , DB d2 )
{
	DB temp;
	temp.inch = d1.cm * .39 + d1.meter*100*.39 + d2.inch;
	double extra_feet = floor(temp.inch / 12);
	temp.inch = temp.inch - extra_feet*12;
	temp.feet = d2.feet +extra_feet;

	return temp;
}




int main()
{
	DM dm1;
	DB db1,result;
	dm1.setData(1,50);
	dm1.display();
	db1.setData(5,5);
	db1.display();

	result = add(dm1,db1);
	result.display();

	return 0;
}