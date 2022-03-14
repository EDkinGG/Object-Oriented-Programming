#include<bits/stdc++.h>
 
using namespace std;

class student
{
	double cgpa;
public:
	int roll;
	string name;
	void setgpa()//---> membership function
	{
		cgpa = 3.5;
	}
	friend void setCgpa( student &s );
	friend void displayCG( student &s );
};

void setroll( student &s ) // --> outside e ekta function
{
	s.roll = 10;
	// s.cgpa = 3.5; --> ei function private member access korte parbe na so ei line vhul
}

// Nicher duita friend function ora private member access korte pare
void setCgpa( student &s )
{
	s.cgpa = 3.9;
}

void displayCG( student &s )
{
	cout<<s.cgpa<<endl;
}

int main()
{
    student s1;
    
    s1.roll = 12;
    cout<<s1.roll<<endl;

    setroll(s1);
    cout<<s1.roll<<endl;

    s1.setgpa();
    displayCG(s1);

    setCgpa(s1);
    displayCG(s1);
    return 0;
}
