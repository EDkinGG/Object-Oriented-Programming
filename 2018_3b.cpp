#include<bits/stdc++.h> 
using namespace std;

//<------------------------ComplexNumber.h file------------------>start
class Complex{
	int real;
	int imaz;
public:
	Complex(int,int);
	Complex operator + (Complex);
	void displayC();
};
//<------------------------ComplexNumber.h file------------------->end

//<------------------------ComplexNumber.cpp---------------------->start
// #include<bits/stdc++.h>
// #include "ComplexNumber.h" 
// using namespace std;
Complex::Complex( int x = 0,int y = 0)
{
	this->real = x;
	this->imaz = y;
}
Complex Complex :: operator + (Complex C1 )
{
	Complex temp;
	temp.real = this->real + C1.real;
	temp.imaz = this->imaz + C1.imaz;
	return temp;
}

void Complex :: displayC()
{
	cout<<this->real<<"+i"<<this->imaz;
}

//<------------------------ComplexNumber.cpp---------------------->end


//<------------------------Main.cpp---------------------->start
// #include<bits/stdc++.h>
// #include <ComplexNumber.h> 
// using namespace std;

template<class T>
class matrix
{
	int r,c;
	T m[10][10];
public:
	matrix()
	{

	}
	matrix( int row , int col , T arr[] )
	{
		r = row;
		c = col;
		int i,j,index = 0;
		for( i = 0 ; i < row ; i++ )
		{
			for( j = 0 ; j < col ; j++ )
			{
				m[i][j] = arr[index];
				index++;
			}
		}
	}

	matrix<T> operator + (matrix<T> mt )
	{
		matrix<T> temp;
		temp.c = this->c;
		temp.r = this->r;
		int i,j;

		for( i = 0 ; i<r ; i++ )
		{
			for( j = 0 ; j<r ; j++ )
			{
				temp.m[i][j] = this->m[i][j] + mt.m[i][j];
			}
		}
		return temp;
	}

	void display()
	{
		int i ,j;
		for( i = 0 ; i<r ; i++ )
		{
			for( j = 0 ; j<r ; j++ )
			{
				 this->m[i][j].displayC();
				 cout<<" ";
			}
			cout<<endl;
		}
	}
};

//<------------------------Main.cpp---------------------->end

int main()
{
	Complex x(1,2);
	x.displayC();
	cout<<endl;

	Complex a[] = {Complex(1,2),Complex(2,2),Complex(2,1),Complex(3,3)};

	matrix <Complex> m1(2,2,a), m2(2,2,a);

	matrix <Complex> m3;
	m1.display();
	m3 = m1+m2;
	
	m3.display();
   
    return 0;
}