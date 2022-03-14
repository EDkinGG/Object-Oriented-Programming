#include <bits/stdc++.h>
using namespace std;

class A
{
public:
	A()
	{
		cout<<"A"<<endl;
	}
	void display()
	{
		cout<<"Hello there!"<<endl;
	}
};


class B : virtual public A
{
public:
	B()
	{
		cout<<"B"<<endl;
	}
};


class C : virtual public A
{
public:
	C()
	{
		cout<<"C"<<endl;
	}
};
class D : virtual  public A
{
public:
	D()
	{
		cout<<"D"<<endl;
	}
};


class E : virtual public B
{
public:
	E()
	{
		cout<<"E"<<endl;
	}
};


class F : virtual public B
{
public:
	F()
	{
		cout<<"F"<<endl;
	}
};
class G : virtual public D
{
public:
	G()
	{
		cout<<"G"<<endl;
	}
};

class H : virtual public D
{
public:
	H()
	{
		cout<<"H"<<endl;
	}
};



class I : virtual public F , public E
{
public:
	I()
	{
		cout<<"I"<<endl;
	}
};

class J : virtual public F , virtual public G, public C 
{
public:
	J()
	{
		cout<<"J"<<endl;
	}
};



class K : public H, virtual public G
{
public:
	K()
	{
		cout<<"K"<<endl;
	}
};


class L : public I, public K, public J
{
public:
	L()
	{
		cout<<"L"<<endl;
	}
};

int main()
{
	L x;
	//x.display();
	return 0;
}