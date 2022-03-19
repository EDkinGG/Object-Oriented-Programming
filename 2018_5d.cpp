#include<bits/stdc++.h>

using namespace std;

class A
{
public:
	A( int a )
	{
		cout<<"Base A"<<endl;
	}
};

class B
{
public:
	B( int a)
	{
		cout<<"Base B"<<endl;
	}
};

class C:protected A,private B
{
public:
	C( int a ): B(a),A(a)
	{
		cout<<"Derived C"<<endl;
	}

};

int main()
{
	C c(10);
	B a(5);
	return 0;
}