#include <bits/stdc++.h>

using namespace std;

class A
{
public:
	void display();
};

class B
{
public:
	void display()
	{
		cout<<"class B "<<endl;
	}
};

class C : public A, public B 
{
public:
	void display()
	{
		cout<<"class C "<<endl;
		//display();//--> dile Class C er display function ei recursion hobe.
		// mane infinite time call hobe
		A::display();
		B::display();
	} 
	
};

void A :: display()
{
	cout<<"Class A"<<endl;
}

int main()
{
	C ob;
	ob.display();
	// ob.A::display();
	// ob.B::display();
	return 0;
}