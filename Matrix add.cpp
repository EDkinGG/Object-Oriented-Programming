#include <bits/stdc++.h>
using namespace std;

class matrix
{
    int r, c;
    int m[10][10];
public:
    matrix()
    {

    }
    matrix(int row, int col, int arr[])
    {
        r = row;
        c = col;
        int i, j, index = 0;
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                m[i][j] = arr[index];
                index++;
            }
        }
    }
    matrix operator +(matrix mt)
    {
        matrix temp;
        temp.c = c;
        temp.r = r;
        int i, j;
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                temp.m[i][j] = this->m[i][j] + mt.m[i][j];
            }
        }
        return temp;;
    }

    void display()
    {
        int i, j;
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int a[] = {1, 2, 3, 4,5,6,7,8,9};
    matrix m1(3,3, a), m2(3, 3, a);
    matrix m3;
    m3 = m1 + m2;
    m3.display();
    return 0;
}