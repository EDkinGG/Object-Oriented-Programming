#include<bits/stdc++.h>

using namespace std;

template<class T>
T average(int n, T arr[] )
{
	T sum = 0;

	for( int i = 0 ; i<n ; i++ )
	{
		sum += arr[i];
	}

	return ((T)sum/n);
}

int main()
{
	double arr[] = {10.5,11.5,12,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	double avg = average(len,arr);

	cout<<avg<<endl;
	return 0;
}