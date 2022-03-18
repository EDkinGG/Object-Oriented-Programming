#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    int rollno;
    int sub1,sub2,sub3;
    public:
    student(){
    }
    student(string n, int r, int s1, int s2 , int s3 ){
    	// cout<<"Defalut called"<<endl;
        name = n;
        rollno = r;
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }
    student(student& s){
    	// cout<<"Copy called"<<endl;
        this->name = s.name;
        this->rollno = s.rollno;
        this->sub1 = s.sub1;
        this->sub2 = s.sub2;
        this->sub3 = s.sub3;
    }
    void display()
    {
    	cout<<this->name<<endl;
    	cout<<"Roll "<<this->rollno<<endl;
    	cout<<"Sub1 "<<this->sub1<<endl;
    	cout<<"Sub2 "<<this->sub2<<endl;
    	cout<<"Sub3 "<<this->sub3<<endl;
    }
};
int main()
{
	student s1("Rashed Ghani", 11, 91, 92, 93);
    student s2("Tamim Birokto", 22, 94, 95, 96 );
    student s3("Walilul Sumon", 33, 97, 98, 99); 
	student demo[] = {s1,s2,s3};//->> evabe style copy constructor call hoy

	// student demo[] = {student("Rashed Ghani", 11, 91, 92, 93),
 //                    student("Tamim Birokto", 22, 94, 95, 96 ), ///---- evabe korle copy constructor call hoy na
 //                    student("Walilul Sumon", 33, 97, 98, 99) };

    int len = sizeof(demo)/sizeof(demo[0]);
    // cout<<len<<endl;
    // student demo2[len];
    // for( int i = 0 ; i<len ; i++ )// jodi demo array ta arekta array demo2 te copy korte chai!!
    // {
    // 	demo2[i] = demo[i];
    // }
    for( int i = 0 ; i<len ; i++ )
    {
    	demo[i].display();
    } 
    return 0;
}