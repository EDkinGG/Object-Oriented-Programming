#include<bits/stdc++.h>
using namespace std;

class Complex{
	int real;
	int imaz;
public:
	Complex( int x = 0 , int y = 0 )
	{
		real = x;
		imaz = y;
	}

	friend ostream& operator << ( ostream& out , const Complex& C );
	friend istream& operator >> ( istream& in , Complex& C );
};

ostream& operator<< ( ostream& out, const Complex& C )
{
    // Since operator<< is a friend of the Complex class, we can access Complex's members directly.
    out << C.real<<"+i"<<C.imaz;

    return out;
}

istream& operator>> ( istream& in, Complex& C )
{
    // Since operator>> is a friend of the Complex class, we can access Complex's members directly.
    // note that parameter point must be non-const so we can modify the class members with the input values
    in >> C.real;
    in >> C.imaz;
    
    return in;
}


int main()
{
    cout<<"Enter a complex number"<<endl;
    Complex c1;
    cin>>c1;
    cout<<c1<<endl;
    return 0;
}