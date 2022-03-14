#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	int inch;
public:
	Distance()
	{
		feet = 0;
		inch = 0;
	}
	Distance( int a, int b )
	{
		feet = a;
		inch = b;
	}
	Distance ( Distance &b )
	{
		feet = b.feet;
		inch = b.inch;
	}
	void displayDistance()
	{
        cout << "Feet: " << feet << " Inch:" << inch <<endl;
    }

	// void operator ++ (int)// for i++
	// {
	// 	feet++;
	// 	inch++;
	// }
	Distance operator ++ (int)// for i++
	{
		Distance temp;
		temp.feet = feet + 1;
		temp.inch = inch + 1;
		return temp;
	}
	void operator ++ ( ) //for ++i
	{
		feet++;
		inch++;
	}

	void operator -- (int)
	{
		feet++;
		inch++;
	}
};

int main()
{
	Distance d1;
	Distance d2(10,-15);
	Distance d3;

	d1.displayDistance();
	d2.displayDistance();

	// d1++;
	// d1.displayDistance();
	// d2++;
	// d2.displayDistance();
	++d1;
	d1.displayDistance();

	d3 = d1++;
	d3.displayDistance();
	// Distance d3 = d1;
	// d3.displayDistance();

	return 0;
}