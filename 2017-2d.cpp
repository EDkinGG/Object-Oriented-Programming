#include<bits/stdc++.h>
using namespace std;
class Test
{
	static int x;
public:
	static int y;
	void func( int x )
	{
		cout<<"Value of Test :: x is "<<Test::x;
		cout<<" Value of x is "<<x;
	}
};

int Test::x = -1;
int Test::y = 2;
int main()
{
    Test obj;
    int x = 3;
    obj.func(x);
    cout<<"\nTest::y = "<<Test::y;
    return 0;
}