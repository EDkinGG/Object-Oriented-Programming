#include <iostream>
using namespace std;
class Complex
{
public:
    float real;
    float img;

    Complex() {}
    Complex(float _real, float _img)
    {
        this->real = _real;
        this->img = _img;
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.img = this->img + obj.img;
        temp.real = this->real + obj.real;
        return temp;
    }
    Complex operator-(const Complex &obj)
    {
        Complex temp;
        temp.img = this->img - obj.img;
        temp.real = this->real - obj.real;
        return temp;
    }
    void display()
    {
        cout << this->real << " + " << this->img << "i" << endl;
    }
    friend ostream& operator<< (ostream& out, const Complex& point);
};

ostream& operator<< (ostream& out, const Complex& Complex)
{
    out << "" << Complex.real << " + " << Complex.img << "i\n" ;
    return out;
}
int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    Complex a, b, c;

    // cout << "Enter real and complex coefficient of the first complex number: " << endl;
    cin >> a.real >> a.img;

    // cout << "Enter real and complex coefficient of the second complex number: " << endl;
    cin >> b.real >> b.img;

    cout << "Addition Result: ";
    c = a+b;
    cout << c ;

    cout << "Subtraction Result: ";
    c = a-b;
    cout << c ;
    return 0;
}





// #include<bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// typedef pair<int,int> pi;
// const char nl = '\n';
// const char gg = ' ' ;
// template<class T> T cmax(T a, T b){return (a>b?a:b);}

// #define ff first
// #define ss second
// #define pb push_back
// #define all(x) x.begin(),x.end()
// #define w(x) cout << (#x) << " is " << x << "\n" ;
// #define fast ios_base::sync_with_stdio(false) , cin.tie(0) ;

// class st
// {
//     int x;
//     int y;
// public:
//     st();
//     st(int _x, int _y)
//     {
//         x = _x ;
//         y = _y ;
//     }
//     st(st &_x)
//     {
//         x = _x.y ;
//         y = _x.x ;
//     }
    
//     ~st(){}
//     void show()
//     {
//         cout << this->x << ' ' << this->y << nl;
//     }
// };


// void solve()
// {
//     st a(10,20);
//     a.show();
//     st b(a);
//     b.show();
// }

// int main()
// {
//     fast ;
//     int t = 1;
//     // cin >> t;
//     while(t--) solve();
//     return 0;
// }