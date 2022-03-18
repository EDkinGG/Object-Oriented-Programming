#include<bits/stdc++.h>

using namespace std;
// error --> p = &deq[3]; corrected to---> int *p = &deq[3];

int main()
{
	deque<int>deq = {2,3,4,5};
	int *p = &deq[3];
	deq.push_back(6);
	cout<<*p<<endl;	
	return 0;
}
