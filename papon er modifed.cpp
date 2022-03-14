#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
	int roll;
public:
	student()
	{
		roll = 1;
	}
	student(int x )
	{
		roll = x;
	}
	void show_roll()
	{
		cout<<roll<<endl;
	}
};

class test
{
protected:
	int sub1,sub2;
public:
	test()
	{
		sub1 = 0;
		sub2 = 0;
	}
	test(int s1 ,int s2 )
	{
		sub1 = s1;
		sub2 = s2;
	}
	void show_sub()
	{
		cout<<"sub1 "<<sub1<<" sub2 "<<sub2<<endl;
	}
};

class result:public test ,public student
{
protected:
	int total;
public:
	result():test(),student()
	{

	}
	result( int a, int b,int c):test(a,b),student(c)
	{
		total = a+b;
		cout<<"total: "<<total<<endl;
	}

};

int main()
{
	result t1;
	result t2(95,91,15);

	t1.show_roll();
	t1.show_sub();

	t2.show_roll();
	t2.show_sub();

	return 0;
}