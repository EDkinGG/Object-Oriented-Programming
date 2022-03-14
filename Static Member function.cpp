#include<bits/stdc++.h>
 
using namespace std;

class TEST
{
public:
	static int count; 
	int acNo;
	TEST()
	{
		acNo = count;
		count++;
	}
	TEST( int ac )
	{
		acNo = ac;
		count++;
	}

	static void displayCnt()// Static member function-->> this can only access static members
	{
		cout<<count<<endl;
	}

	static void setcnt()
	{
		count = 5;
		//acNo = 1;
	}
};

int TEST::count = 0;

int main()
{
	TEST::displayCnt();
	TEST::setcnt();
	TEST::displayCnt();

	TEST a1;
	cout<<a1.count<<endl;

	TEST a2(111);
	cout<<a1.count<<endl;
	cout<<a2.count<<endl;
	a2.displayCnt();

    return 0;
}