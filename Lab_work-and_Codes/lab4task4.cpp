#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char a[50];
    cout<<"enter First favorite subject :";
    cin>>a;
    char b[50];
     cout<<"enter Second favorite subject :";
    cin>>b;

    strcat(a,b);

    cout << a ;

    return 0;

}
