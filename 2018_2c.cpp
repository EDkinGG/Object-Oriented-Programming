#include<bits/stdc++.h>
using namespace std;

class DoubleArray
{
	int n;
	int avg;
	double *arr;
public:
	DoubleArray()
	{

	}
	DoubleArray( int N , double ARR[] )
	{
		this->n = N;
		arr = new double[n];
		for( int i = 0 ; i < n ; i++ )
		{
			*(arr+i) = ARR[i];
			// arr[i] = ARR[i]; 
		}
	}

	DoubleArray( DoubleArray &dArr)
	{
		n = dArr.n;
		arr = new double[n];

		for( int i = 0 ; i<n ;i++ )
		{
			*(arr+i) = *(dArr.arr+i);
		}
		avg = dArr.avg; 
	}
	void average()
	{
		avg = 0;
		for( int i = 0 ; i < n ; i++ )
		{
			avg += *(arr+i);
		}
		avg = avg/n;
	}
	void display()
	{
		cout<<"The Double Array"<<endl;

		for( int i = 0 ; i < n ; i++ )
		{
			cout<<*(arr+i)<<" ";
		}
		cout<<endl;
		cout<<"The average : "<<avg<<endl;
	}

	~DoubleArray()
	{
		delete(arr);
	}
};




int main()
{
	double arr[] = {3.34,3.35,3.36};
	DoubleArray DA1(3,arr);
	DA1.average();
	DA1.display();

	DoubleArray DA2 = DA1;
	DA2.display();

}