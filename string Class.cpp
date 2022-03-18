

#include<bits/stdc++.h>
using namespace std;

class String
{
	char *s;
public:
	String()
	{
	    s = new char[0];
	}
	String(char *v)
	{
		s = new char[strlen(v)];
		strcpy(s,v);
	}
	String(String &s1)
	{
	    s = new char[strlen(s1.s)];
	    strcpy(this->s, s1.s);
	}//----copy constructor

	void display()
	{
	    if(s == NULL)
            cout<<"NULL string \n";
        else
			cout<<this->s<<"\n";
	}

	String operator + ( String str1 )
	{
		String res;
		res.s = new char [ strlen(this->s) + strlen(str1.s) ];
		strcpy(res.s, this->s);
		strcat(res.s, str1.s );
		return res;
	}

	bool operator == ( String str1 )
	{
		int value=strcmp(this->s ,str1.s); 
   		if(value==0)
   		{
   			// printf("strings are same"); 
   			return true; 
   		}  
   		else
   		{
   			// printf("strings are not same");
   			return false;  
   		}  
	}
};


int main()
{
	String s1;
	String s2("Rashed");
	String s3("GTZ");
	String s4("RashedGTZz");
	s1 = s2+s3;

	s1.display();
	s2.display();
	s3.display();
	s4.display();

	if( s1 == s4 )
	{
		cout<<"S1 and S4 are equal"<<endl;
	}
	else
	{
		cout<<"S1 and S4 are not equal"<<endl;
	}
    return 0;
}