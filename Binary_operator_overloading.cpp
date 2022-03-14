#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
	int height;
	int breadth;
	int length;
public:
	Box( int h = 0, int l = 0, int b = 0)
	{
		height = h;
		breadth = b;
		length = l;
	}
	Box(Box &b )
	{
		this->height = b.height;
		this->length = b.length;
		this->breadth = b.breadth;	
	}
	void display()
	{
		cout<<"height: "<<this->height<<endl;
		cout<<"length: "<<this->length<<endl;
		cout<<"height: "<<this->breadth<<endl;
		cout<<endl;	
	}
	Box operator + ( int b )
	{
		Box temp;
		temp.height = this->height + b;
		temp.length = this->length + b;
		temp.breadth = this->breadth + b;
		return temp;
	}
	Box operator + ( Box b )
	{
		Box temp;
		temp.height = this->height + b.height;
		temp.length = this->length + b.length;
		temp.breadth = this->breadth + b.breadth;
		return temp;
	}

	Box operator - (Box b)
	{
		Box temp;
		temp.height = this->height - b.height;
		temp.length = this->length - b.length;
		temp.breadth = this->breadth - b.breadth;
		return temp;
	}

};

int main()
{
	Box b1(20,30),b2(10,15,5);
	b1.display();
	Box b3 = b1 + b2 + b1;
	b3.display();
	b1.display();
	Box b4 = b1 + 4;
	b4.display();
	return 0;
}