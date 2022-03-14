#include <bits/stdc++.h>
using namespace std;

class mat
{
	int r,c;
	int m[10][10];
public:
	mat()
	{

	}
	mat( int row , int col , int a[] )
	{
		this->r = row;
		this->c = col;

		int index = 0;
		for( int  i = 0 ; i < row ; i++ )
		{
			for( int  j = 0 ; j < col ; j++ )
			{
				this->m[i][j] = a[index];
				index++;
			}
		}
	}
	mat operator + ( mat b )
	{
		mat temp;
		temp.r = b.r;
		temp.c = b.c;

		for( int  i = 0 ; i < b.r ; i++ )
		{
			for( int  j = 0 ; j < b.c ; j++ )
			{
				temp.m[i][j] = this->m[i][j] + b.m[i][j];
			}
		}
		return temp;
	}


	void display()
	{
		for( int  i = 0 ; i < r ; i++ )
		{
			for( int  j = 0 ; j < c ; j++ )
			{
				cout<<m[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
};

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,10};

	mat m1(3,3,a),m2(3,3,a);
	mat m3;
	m3 = m1 + m2;
	m3.display();

	return 0;
}