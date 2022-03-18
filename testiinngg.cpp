#include<bits/stdc++.h>

using namespace std;
// All ok in this code!!

int main()
{
	vector<int>vec = {2,3,4,5};
	int *p = &vec[3];
	vec.push_back(6);
	cout<<*p<<endl;	
	return 0;
}
