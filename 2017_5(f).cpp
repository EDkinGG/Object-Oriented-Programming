#include<bits/stdc++.h>
 
using namespace std;

class Lsb_less
{
public:
	bool operator()(int x ,int y)
	{
		return (x%10) < (y%10);
	}
};

int main()
{
	set <int, Lsb_less >s = {21,23,26,27};
	set <int , Lsb_less> :: iterator itr1,itr2;
	itr1 = find(s.begin(),s.end(),36);
	itr2 = s.find(36);
	cout<<"itr1 "<<*itr2<<endl;

    return 0;
}