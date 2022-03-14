#include<bits/stdc++.h>
using namespace std;
class mat
{
    int arr[2][2];
public:
    mat(int a[2][2])
    {
        int i,j;
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                arr[i][j]=a[i][j];
            }
        }
    }
    mat()
    {

    }
    mat operator*(mat m)
    {
        mat mt;
        int i,j,k;
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                int s=0;
                for(k=0; k<2; k++)
                {
                    s = s + this->arr[i][k]*m.arr[k][j];
                }
                mt.arr[i][j]=s;
            }
        }
        return mt;
    }
    void show()
    {
        int i,j;
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int ar1[2][2]= {1,2,3,4},ar2[2][2]= {1,2,3,4};
    mat mt1(ar1),mt2(ar2),mt3;
    mt3 = mt1*mt2;
    mt3.show();
    return 0;
}
