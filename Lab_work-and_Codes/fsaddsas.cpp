#include<iostream>
using namespace std;
int main()
{

    int a[3]={8,7,7};
    int b[3]={5,6,7};
    int i;
    i=0;
    cout<<"new array is";
    for(i=0;i<=3;i++)
    {
        cout<<a[i]+b[i];
    }
    return 0;
}

