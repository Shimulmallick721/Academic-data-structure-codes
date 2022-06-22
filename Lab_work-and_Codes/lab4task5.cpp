#include<iostream>
#include<cstring>

using namespace std;

int main()
{
char source[10] = "mango";
char terget[10]="apple";

cout<< "The content of source string : " << source << "\n";
strcpy(terget, source);

cout<< "Copying the string is completed" << "\n";
cout<< "The content of source string : " << source << "\n";
cout<< "The content of destination string : " << terget;

return 0;
}
