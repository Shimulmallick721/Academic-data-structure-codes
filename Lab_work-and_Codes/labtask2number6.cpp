#include <iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],multiply[3][3],i,j,k;
    cout<<"enter the first matrix =\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the second matrix =\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Multiplied matrix=\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            multiply[i][j]=0;
            for(k=0; k<3; k++)
            {
                multiply[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
//for printing result
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<multiply[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
