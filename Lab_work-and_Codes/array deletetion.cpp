#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int k, i, n=10, mimo[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    n--;

    n--;
    for(i=0; i<n; i++)
        mimo[i] = mimo[i+1];
    k = 3;
    n--;
    for(i=k; i<n; i++)
        mimo[i] = mimo[i+1];
    for(i=0; i<n; i++)
        cout<<mimo[i];
    return 0;
}


