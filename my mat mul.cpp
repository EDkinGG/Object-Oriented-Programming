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
		r = row;
		c = col;
		int index = 0;

		for( int i = 0 ; i < row ; i++ )
		{
			for( int j = 0 ; j < col ; j++ )
			{
				m[i][j] = a[index];
				index++;
			}
		}
	}

	mat operator * (mat b )
	{
		mat temp;
		temp.r = this->r;
		temp.c = b.c;

		for( int i = 0 ; i < temp.r ; i++ )
		{
			for( int j = 0 ; j < temp.c ; j++ )
			{
				int s =0;
				for( int k = 0 ; k < this->c ; k++ )
				{
					s = s + this->m[i][k]*b.m[k][j];
				}
				temp.m[i][j] = s;
			}
		}
		return temp;
	}

	void display()
	{
		for( int i = 0 ; i <r ; i++ )
		{
			for( int  j = 0 ; j<c ; j++  )
			{
				cout<<m[i][j]<<" ";
			} 
			cout<<endl;
		}
		cout<<endl;
	}
};

int main()
{
	int a[] = {1,2,3,4};
	int b[] = {2,2};
	mat m1(2,2,a);
	mat m2(2,2,a);
	m1.display();
	m2.display();

	mat m3;

	m3 = m1*m2;
	m3.display();

	return 0;
}