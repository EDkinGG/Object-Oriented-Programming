#include<bits/stdc++.h>
using namespace std;

class A1
{
public:
	A1( int x=0 )
	{
		cout<<"A1::A1(int) called"<<endl;
	}
};

class A2: virtual public A1 // virtual added
{
	public://--->> added the public here
	A2( int x=0 )
	{
		cout<<"A2::A2(int) called"<<endl;
	}
};

class A3:virtual public A1 // virtual added
{
public://--->> added the public here
	A3( int x=0 )
	{
		cout<<"A3::A3(int) called"<<endl;
	}
};

class A4:public A2// virtual removed
{
public:
	A4( int x=0 )
	{
		cout<<"A4::A4(int) called"<<endl;
	}
};

class A5:public A3//virtual removed
{
public:
	A5( int x=0 )
	{
		cout<<"A5::A5(int) called"<<endl;
	}
};

class A6:public A4,public A5 
{
public:
	A6( int x=0 )
	{
		cout<<"A6::A6(int) called"<<endl;
	}
};

int main()
{
	A6 A61(30);
  
    return 0;
}