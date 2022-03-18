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
	// void display()
	// {
	// 	cout<<"class c "<<endl;
	// 	// display();--->eta dile recusion hoye jabe
	// } 
	//-->> ei part uncomment korle ob.display() te ei display excute korbe....
	// bt jodi eta evabe comment kora thake tokhon ob.display() ambiguous hobe 
	//tokhon je class er display chai tar name add korte hobe like bellow
	//ob.CLASS_NAME::display();
};

void A :: display()
{
	cout<<"Class A"<<endl;
}

int main()
{
	C ob;
	// ob.display(); //--> ambiguous
	ob.A::display();
	ob.B::display();
	return 0;
}