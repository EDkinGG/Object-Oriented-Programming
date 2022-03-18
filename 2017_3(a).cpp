#include<bits/stdc++.h>
using namespace std;
class Shape
{
public:
	virtual double print() = 0;// --> to be an abstract class there should be at least one pure virtual function
	double area()const
	{
		return base*height;
	}
private:
	double base;
	double height;
};

int main()
{
  
    return 0;
}