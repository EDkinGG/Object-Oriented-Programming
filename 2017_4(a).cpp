#include<bits/stdc++.h>
using namespace std;

class Person
{
// protected:
	string name;
public:
	Person()
	{

	}
	Person( string s )
	{
		name = s;
	}
	virtual void info()
	{
		cout<<"Name: "<<this->name<<endl<<endl;
	}
};

class Student:public Person
{
	int matric_number;
public:
	Student():Person()
	{

	}
	Student( string name1 , int x):Person( name1 ) 
	{
		matric_number = x;
	}

	void info()
	{
		// cout<<"Name: "<<this->name<<endl;//--> name show korte hole Person e Name Protected korte hobe!
		cout<<"matric_number "<<this->matric_number<<endl<<endl;
	}

};

class MasterStudent:public Person
{
	string subject;
public:
	MasterStudent():Person()
	{

	}
	MasterStudent( string name2 , string s):Person( name2 )
	{
		subject = s;
	}
	void info()
	{
		// cout<<"Name: "<<this->name<<endl;//--> name show korte hole Person e Name Protected korte hobe!
		cout<<"Subject "<<subject<<endl<<endl;
	}
};

int main()
{
  	Person B("Rashed");
  	Student DS("Tamim", 101 );
  	MasterStudent MSD("Wali","CSE");
  	Person *bptr;// Base Class Person er pointer bptr nilam!

  	bptr = &B;
  	bptr->info();

  	bptr = &DS;
  	bptr->info();

  	bptr = &MSD;
  	bptr->info();

    return 0;
}