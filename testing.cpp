#include <bits/stdc++.h>

using namespace std;

class base
{
public:
	void display()
	{
	cout<<"Class Base"<<endl;
	}
	virtual void show()
	{
	cout<<"Show Base"<<endl;
	}
};

class derived : public base
{
public:
	void display()
	{
		cout<<"Class Derived "<<endl;
	}
	void show()
	{
	cout<<"Show Derived"<<endl;
	}
};

int main()
{
	base B;
	derived D;
	base *bptr;
	bptr = &B;
	bptr->display();
	bptr->show();

	bptr = &D;
	bptr->display();
	bptr->show();



	return 0;
}