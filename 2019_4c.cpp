#include<bits/stdc++.h>
using namespace std;

template<class T>
void fun( const T &x )
{
    static int count = 0;
    cout<<"x = "<<x<<" count = "<<count++<<endl;
}
int main()
{
    fun<int> (1);
    fun<int> (2);
    fun<double>(1.1);
    fun<int> (3);
    return 0;
}