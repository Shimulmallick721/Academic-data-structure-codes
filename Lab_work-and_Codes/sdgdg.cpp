
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int k, i, n=10, mimo[1000]= {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    mimo[n++] = 100;
    for(i=n; i>0; i--)
        mimo[i] = mimo[i-1];
    mimo[0] = 300;
    n++;

    k = 5;
    for(i=n; i>k; i--)
        mimo[i] = mimo[i-1];
    mimo[k] = 200;
    n++;
    for(i=0; i<n; i++)
        cout<<" "<< mimo[i];
    return 0;

}
